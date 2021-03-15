#include <stdio.h>
#include "circles.h"


double Length(struct Circles circles) {
    return circles.radius * 2 * PI;
}

double Square(struct Circles circles) {
    return PI * circles.radius * circles.radius; 
}

struct Circles scanf_circles() {
    struct Circles circles;
    scanf("%d", &circles.x);
    scanf("%d", &circles.y);
    scanf("%d", &circles.radius);
    return circles;
}
    
