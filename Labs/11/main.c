#include <stdio.h>
#include "circles.h"

int main() {
    struct Circles circles = scanf_circles();

    printf("%f\n", Length(circles));
    printf("%f\n", Square(circles));
    return 0;
}
