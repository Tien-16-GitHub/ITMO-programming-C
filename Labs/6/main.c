#include <malloc.h>
#include <stdio.h>

int main() { 

    // 1 Задание 
    double arr[4]; 

    for (int i = 0; i < 4; i++) {
        scanf("%lf", &arr[i]); 
    }

    for (int i = 0; i < 4; i++) {
        printf("%lf, ", *(arr + i)); 
    }
    printf("\n");

// нужно явным образом преобразовать данные которые возращает malloc к тому типу 

    // 2 Задание
    double *array;
    array = (double*)malloc(4 * sizeof(double));

    for (int i = 0; i < 4; i++) {
        array[i] = arr[i];
    }

    for (int i = 0; i < 4; i++) {
        printf("%f, ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}