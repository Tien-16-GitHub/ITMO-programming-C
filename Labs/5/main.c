#include <stdio.h>


int main() {

    // 1 Задание
    int a[9] = {88, 112, 6467, 325, 878, 3, 77, 8, 99}; 
    for (int i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 2 Задание 
    int mat1[2][2] = { {1, 1}, 
                       {1, 4} };
    int mat2[2][2] = { {1, 2}, 
                       {4, 1} };
    int dot[2][2]; 

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            dot[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                dot[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", dot[i][j]);
        }
        printf("\n");
    }

    return 0;
}