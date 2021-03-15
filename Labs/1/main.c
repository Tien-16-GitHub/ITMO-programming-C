#include <stdio.h>

int main() {

    char string[1024];
    int digit;

    scanf_s("%s", &string);

    scanf("%d", &digit);

    printf("%s\n", string);

    printf("%d\n", digit);

    return 0;
}
