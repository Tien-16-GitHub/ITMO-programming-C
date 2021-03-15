#include <string.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>


struct PAIR{
    char tag[4];
    char *data;
};

union TAGHEADER
{
    char buffer[12];
    struct {
        char   empty[2];
        char   version[3];
        char   v1;
        char   v2;
        char   flags;
        int    size;
    } data;
};


union FRAMEHEADER
{
    char buffer[10];
    struct {
        char   name[4];
        int    size;
        short  flags;
    } data;
};

unsigned int reverseBytes(unsigned int n) {
    return ((n >> 24) & 0x000000ff) |
           ((n >> 8) & 0x0000ff00) |
           ((n << 8) & 0x00ff0000) |
           ((n << 24) & 0xff000000);
}


void show(unsigned char* fileName) {

    FILE *file;
    file = fopen(fileName, "rb"); //открываем двоичный файл для чтения

    struct PAIR tags[20]; //тэги
    union TAGHEADER tagheader;

    fread(tagheader.buffer + 2, sizeof(char), 10, file); //считываем в buffer
    unsigned int size = reverseBytes(tagheader.data.size); //получаем размер 

    int tagn = 0; //количество тэгов

    while (ftell(file) < size + 10) { //пока кол-во байт от начал файла < размер + 10

        union FRAMEHEADER frameHeader;
        struct PAIR pair;
        fread(frameHeader.buffer, sizeof(char), 10, file);
        unsigned int frameSize = reverseBytes(frameHeader.data.size);
        if (frameHeader.data.name[0] == 0) //если пустой выйти
            break;

        pair.data = (char*)malloc(frameSize * sizeof(char)); //выделяем память

        fread(pair.data++, sizeof(char), frameSize, file); //считываем pair.data

        strcpy(pair.tag, frameHeader.data.name); //копируем в pair.tag
        tags[tagn++] = pair; //записываем
    }
    for (; tagn < 20; ++tagn) { //до заполняем до нолей
        struct PAIR pair;
        strcpy(pair.tag, "0000");
        pair.data = NULL;
        tags[tagn] = pair;
    }

    for (int i = 0; i < 20; ++i) {
        if (!!strcmp(tags[i].tag, "0000")) { //если не пустой
            printf("%s %s\n", tags[i].tag, tags[i].data);
        }
    }
}

void get(unsigned char* fileName, char FrameName[4]) {

    FILE *file;
    file = fopen(fileName, "rb"); //открываем двоичный файл для чтения

    struct PAIR tags[20]; //тэги
    union TAGHEADER tagheader;

    fread(tagheader.buffer + 2, sizeof(char), 10, file); //считываем в buffer
    unsigned int size = reverseBytes(tagheader.data.size); //получаем размер 

    int tagn = 0; //количество тэгов

    while (ftell(file) < size + 10) { //пока кол-во байт от начал файла < размер + 10

        union FRAMEHEADER frameHeader;
        struct PAIR pair;
        fread(frameHeader.buffer, sizeof(char), 10, file);
        unsigned int frameSize = reverseBytes(frameHeader.data.size);
        if (frameHeader.data.name[0] == 0) //если пустой выйти
            break;

        pair.data = (char*)malloc(frameSize * sizeof(char)); //выделяем память

        fread(pair.data++, sizeof(char), frameSize, file); //считываем pair.data

        strcpy(pair.tag, frameHeader.data.name); //копируем в pair.tag
        tags[tagn++] = pair; //записываем
    }
    for (; tagn < 20; ++tagn) { //до заполняем до нолей
        struct PAIR pair;
        strcpy(pair.tag, "0000");
        pair.data = NULL;
        tags[tagn] = pair;
    }

    for (int i = 0; i < 20; ++i) {
        if (!strcmp(tags[i].tag, FrameName)) { //проверяем 
            printf("%s %s\n", tags[i].tag, tags[i].data);
        }
    }
}

void set(char *fileName, char frameName[4], char *frameValue) {
    FILE *file, *temp;
    file = fopen(fileName, "r+b");

    temp = fopen("temp.mp3", "w+b");

    int c_;
    while ((c_ = getc(file)) != EOF)
        putc(c_, temp); //копируем в temp

    unsigned int valueSize = strlen(frameValue);

    union TAGHEADER tagheader;
    fseek(temp, 0, SEEK_SET);
    fread(tagheader.buffer + 2, sizeof(char), 10, temp);
    unsigned int size = reverseBytes(tagheader.data.size);
    unsigned int newSize = size + valueSize;

    unsigned int tagPosition;
    unsigned int tagFrameSize;

    while (ftell(temp) < size + 10) {
        union FRAMEHEADER frameHeader;
        fread(frameHeader.buffer, sizeof(char), 10, temp);
        unsigned int frameSize = reverseBytes(frameHeader.data.size);
        if (strcmp(frameHeader.data.name, frameName) == 0) {
            tagPosition = ftell(temp) - 10;
            tagFrameSize = frameSize;
            newSize -= frameSize;
            break;
        }
        fseek(temp, frameSize, SEEK_CUR);
    }
    tagheader.data.size = reverseBytes(newSize);
    fseek(temp, 10, SEEK_SET);
    fseek(file, 0, SEEK_SET);
    fwrite(tagheader.buffer + 2, sizeof(char), 10, file);
    for (unsigned int i = 0; i < tagPosition - 10; ++i) {
        int c;
        c = getc(temp);
        putc(c, file);
    }
    union FRAMEHEADER frameHeader;
    fread(frameHeader.buffer , sizeof(char), 10, temp);
    frameHeader.data.size = reverseBytes(valueSize + 1);
    fwrite(frameHeader.buffer, sizeof(char), 10, file);
    putc('\0', file);
    fwrite(frameValue, sizeof(char), valueSize, file);
    fseek(temp, tagFrameSize + 10 + tagPosition, SEEK_SET);
    for (unsigned int i = ftell(file); i < newSize; ++i) {
        unsigned short int c;
        c = getc(temp);
        putc(c, file);
    }
    fclose(file);
    fclose(temp);
    remove("temp.mp3");
}

int main(int argc, char *argv[]) {
    unsigned char *fileName, *frameName, *value;
    for (int i = 1; i < argc; i++) {
        if (strstr(argv[i], "--filepath")) {
            fileName = strpbrk(argv[i], "=") + 1;
        } else if (!strcmp(argv[i], "--show")) {
            show(fileName); 
            break;
        } else if (strstr(argv[i], "--get")) {
            frameName = strpbrk(argv[i], "=") + 1;
            get(fileName, frameName);
            break;
        } else if (strstr(argv[i], "--set")!=NULL) {
            frameName = strpbrk(argv[i], "=") + 1;
        } else if (strstr(argv[i], "--value")!=NULL) {
            value = strpbrk(argv[i], "=") + 1;
            set(fileName, frameName, value);
            break;
        }
    }
    return 0;
}
