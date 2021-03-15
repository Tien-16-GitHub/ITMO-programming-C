#include <stdio.h>


int main () { 

    // 1 Задание
    int digit;
    scanf("%o", &digit); 

    // 2 Задание
    printf("%d\n", digit); 

    // 3 Задание
    printf("%o     %o\n", digit, digit >> 1); 

    // 4 Задание 
    digit = ~digit;
    printf("%o     %o\n", digit, ~digit); 

    // 5 Задание 
    int new_digit;
    scanf("%o", &new_digit);
    printf("%o\n", digit ^ new_digit);


    return 0;
}     
