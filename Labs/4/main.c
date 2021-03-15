#include <stdio.h>

int main() {
    
    // 1 Задание
    int digit;
    scanf("%d", &digit);
    printf("%i\n", (digit >= 64 && digit <= 87));

    // 2 Задание 
    int new_digit; 
    scanf("%d", &new_digit);
    printf("%d\n", (new_digit >> 13) == 1); 

    return 0;
}