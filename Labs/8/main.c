#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct string {
    int size;
    char* data;
};

void ReadString(struct string *str) {
    scanf("%d", &str->size);
    str->size++;
    str->data = malloc(str->size * sizeof(char));
    for (int i = 0; i < str->size; i++) {
        scanf("%c", &str->data[i]);
    }
}

void PrintString(struct string *str) {
    for (int i = 0; i < str->size; i++) {
        printf("%c", str->data[i]);
    }
}

struct string ConcatN(struct string str1, struct string str2, int n) {
    struct string result;
    result.size = str1.size + str2.size - 1;
    result.data = malloc(result.size * sizeof(char));
    for (int i = 0; i < str1.size - 1; i++) {
        result.data[i] = str1.data[i];
    }
    for (int i = 0; i < n; i++) {
        result.data[str1.size + i] = str2.data[i];
    }
    return result;
}

void SecondTask() {
    // 2 Задание
    struct string s1, s2;

    printf("Введите размер и саму строку:\n");
    ReadString(&s1);

    printf("Введите размер и саму строку:\n");
    ReadString(&s2);

    int n;
    printf("Введите n начальный символов второй строки:\n");
    scanf("%d", &n);

    struct string result = ConcatN(s1, s2, n);
    printf("%c", result.data[0]);

    free(s1.data);
    free(s2.data);
}

void FourthTask();
void SixthTask();
void EighthTask();
void FourthTask();

int main() {
    SecondTask();
    return 0;
}
