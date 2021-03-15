#include <stdio.h>
#include <math.h>


double z1 (double alpha, double beta) {
    return (sin(alpha) + cos(2 * beta - alpha)) 
            / (cos(alpha) - sin(2 * beta - alpha));
}

double z2 (double beta) {
    return (1 + sin(2 * beta)) / cos(2 * beta);
}


int main () {

    double alpha, beta;

    scanf("%lf%lf", &alpha, &beta);

    printf("%lf      %lf\n", z1(alpha, beta), z2(beta));

    return 0;
}