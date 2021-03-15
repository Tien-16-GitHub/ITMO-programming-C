#ifndef CIRCLES_H 
#define CIRCLES_H 

const double PI = 3.1415926535;

struct Circles {
    int x;
    int y;
    int radius;
};

double Length(struct Circles);

double Square(struct Circles);

struct Circles scanf_circles();

#endif
