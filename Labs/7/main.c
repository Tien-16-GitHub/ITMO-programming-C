#include <stdio.h>
#include <stdlib.h>

enum Organization {
    ZAO = 0,
    OOO = 1,
    IP = 2,
};

struct Rectangle {
    int point1_x;
    int point1_y;
    int point2_x;
    int point2_y;
    int sqaure;
};


union Value {
    struct ADSL{
        unsigned DSL : 1;
        unsigned PPP: 1;
        unsigned Link: 1;
    }; 
    struct byte{
        int bytes;
    };
    
};

int main() {
    // 1 Задание 
    printf("%d\n", ZAO);


    // 2 Задание
    struct Rectangle r;
    r.point1_x = 0;
    r.point1_y = 0;
    r.point2_x = 2;
    r.point2_y = 2;
    r.sqaure = (r.point2_x - r.point1_x) * (r.point2_y - r.point1_y);
    printf("%d\n", r.sqaure);


    // 3 Задание
    union Value v;
    scanf("%d", &v.bytes); 
    printf("%d   %d   %d", v.DSL, v.Link, v.PPP);

    return 0;
}
