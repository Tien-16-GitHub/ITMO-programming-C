#include <malloc.h>
#include <stdio.h>

int main() {
    // 3 Задание
    int digit;

    scanf("%d", &digit);

    int size_of_str = 0;
    char str_from_digit[10000];

    while (digit) {
        str_from_digit[size_of_str++] =  digit % 10 + '0';
        digit /= 10;
    }

    for (int i = size_of_str - 1; i >= 0; i--) {
        printf("%c", str_from_digit[i]);
    }
    printf("\n");

    // 4 Задание
    int n;

    scanf("%d", &n);

    int prime[n + 1];

    for (int i = 0; i <= n; i++) {
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            if (i * i <= n)
                for (int j = i * i; j <= n; j += i)
                    prime[j] = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}
