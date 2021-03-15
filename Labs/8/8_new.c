#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    { // Задача 1
        int size1, size2;
        char *str1, *str2;

        printf("Введите длину 1 строки:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char*)malloc(size1 * sizeof(char));
        printf("Введите 1 строку:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Введите длину 2 строки:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char*)malloc(size2 * sizeof(char));
        printf("Введите 2 строку:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }

        printf("Введите n: ");
        int n;
        scanf("%d", &n);

        char *str3;
        int size3 = size1 + size2 - 2; 
        str3 = (char*)malloc(size3 * sizeof(char));
        for (int i = 1; i < size1; i++) {
            str3[i - 1] = str1[i];
        }
        for (int i = 1; i <= n; i++) {
            str3[i + size1 - 2] = str2[i];
        }

        for (int i = 0; i < size3; i++) {
            printf("%c", str3[i]);
        }
    }
    { // Задача 4
        int size1, size2;
        char *str1, *str2;

        printf("Введите длину 1 строки:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char*)malloc(size1 * sizeof(char));
        printf("Введите 1 строку:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Введите длину 2 строки:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char*)malloc(size2 * sizeof(char));
        printf("Введите 2 строку:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }

        printf("Введите n: ");
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            if (str1[i] > str2[i]) {
                printf("Первая больше!\n");
                break;
            } 
            if (str1[i] < str2[i]) {
                printf("Вторая больше!\n");
                break;
            }
        }
    }
    { // Задача 6
        int size1, size2;
        char *str1, *str2;

        printf("Введите длину 1 строки:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char*)malloc(size1 * sizeof(char));
        printf("Введите 1 строку:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Введите длину 2 строки:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char*)malloc(size2 * sizeof(char));
        printf("Введите 2 строку:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }


        printf("Введите n: ");
        int n;
        scanf("%d", &n);

        int old_size2 = size2;
        size2 += n; 
        str2 = (char*)realloc(str2, size2); 
        for (int i = 1; i <= n; i++) {
            str2[old_size2 + i - 1] = str1[i];
        }
        for (int i = 1; i < size2; i++) {
            printf("%c", str2[i]);
        }
    }
    { // Задача 8
        int size1, size2;
        char *str1, *str2;

        printf("Введите длину 1 строки:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char*)malloc(size1 * sizeof(char));
        printf("Введите 1 строку:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Введите длину 2 строки:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char*)malloc(size2 * sizeof(char));
        printf("Введите 2 строку:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }


        printf("Введите символ: \n");
        char c;
        scanf("%c", &c);
        scanf("%c", &c);

        for (int i = 1; i < size1; i++) {
            if (str1[i] == c) {
                printf("Нашел!\n");
                break;
            }
        }
        printf("Не нашел!\n");
    }
    {
        int size1, size2;
        char *str1, *str2;

        printf("Введите длину 1 строки:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char*)malloc(size1 * sizeof(char));
        printf("Введите 1 строку:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Введите длину 2 строки:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char*)malloc(size2 * sizeof(char));
        printf("Введите 2 строку:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }


        int cnt = 0;
        for (int i = 1; i < size1; i++) {
            int ok = 1;
            for (int j = 1; j < size2; j++) {
                if (str1[i] == str2[j]) {
                    ok = 0;
                }
            }
            if (ok == 1) {
                cnt++;
            }
        }
        printf("Длина отрезка: %d", cnt);
    }
    return 0;
}