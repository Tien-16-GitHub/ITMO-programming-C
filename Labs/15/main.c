#include <stdio.h>
#include <string.h>
void Extract(char* name_of_fail) {
    FILE *file;
    file = fopen(name_of_fail, "r");
    fseek(file, 0, SEEK_END);
    unsigned int end_of_file = ftell(file);
    fseek(file, 0, SEEK_SET);
    int i;
    while (ftell(file) < end_of_file) {
        unsigned int size = getc(file);
        char name_of_file[size];
        for (i = 0; i < size; i++)
            name_of_file[i] = getc(file);
        fread(&size, sizeof(unsigned int), 1, file);  FILE *new_file;
        new_file = fopen(name_of_file, "w");
        for (i = 0; i < size; i++)
            fputc(getc(file), new_file);
        fclose(new_file);
    }
}
void List(char* name_of_fail) {
    FILE *file;
    file = fopen(name_of_fail, "r");
    fseek(file, 0, SEEK_END);
    unsigned int end_of_file = ftell(file);
    fseek(file, 0, SEEK_SET);
    int i;
    while (ftell(file) < end_of_file) {
        unsigned int size = getc(file);
        char name_of_file[size];
        for (i = 0; i < size; i++)
            name_of_file[i] = getc(file);
        printf("%s\n", name_of_file);
        fread(&size, sizeof(unsigned int), 1, file);  fseek(file, size, SEEK_CUR);
    }
}
void Create(char* name_of_fail, int number_of_files, char *files[]) {  FILE *file;
    file = fopen(name_of_fail, "w");
    unsigned char name_of_fail_size;
    unsigned int body_size;
    int i, j;
    for (i = 0; i < number_of_files; i++) {
        name_of_fail_size = strlen(files[i]);
        fputc(name_of_fail_size, file);
        int name_of_fail_size_int = (int) name_of_fail_size;  for (j = 0; j < name_of_fail_size_int; j++)
            fputc(files[i][j], file);
        FILE *for_archive;
        for_archive = fopen(files[i], "r");
        fseek(for_archive, 0, SEEK_END);
        body_size = ftell(for_archive);
        fseek(for_archive, 0, SEEK_SET);
        fwrite(&body_size, sizeof(unsigned int), 1, file);
        for (j = 0; j < body_size; j++)
            fputc(getc(for_archive), file);  }
}
int main(int argc, char *argv[]) {
    char name_of_fail[20];
    strcpy(name_of_fail, argv[2]);
    if (argc > 4) {
        int number_of_files = argc - 4;
        Create(name_of_fail, number_of_files, &argv[4]);  } else if (!(strcmp(argv[3], "--extract"))) {  Extract(name_of_fail);
    } else {
        List(name_of_fail);
    }
    return 0;
}
