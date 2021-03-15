#include <malloc.h>
#include <stdio.h>

int * array_of_digit(int n) {
    int new_n = n;
    int size = 0;
    while (new_n) {
        new_n /= 10;
        size++;
    }
    int *array = (int*)malloc(sizeof(int) * size);
    for (int i = size - 1; i >= 0; i--) {
        array[i] = n % 10;
        n /= 10;
    }

    return array;
}

int recursive_sum(int a) {
    if (a == 0) {
        return 0;
    }
    return a % 10 + recursive_sum(a / 10);
} 

int main() {
    // 3 Задание
    int n;
    scanf("%d", &n);
    int *result = array_of_digit(n);

    for (int i = 0; i <= sizeof(result) / sizeof(int*); i++) {
        printf("%d ", result[i]);
    }
    free(result);
    printf("\n");

    // 4 Задание 
    int a;
    scanf("%d", &a);
    printf("%d", recursive_sum(a));

    return 0;
}
