#include <stdio.h>
#include <math.h>

int main(void) {
    double px, py, qx, qy;
    double distance;

    printf("x coordinate of point p: ");
    scanf("%lf", &px);
    printf("y coordinate of point p: ");
    scanf("%lf", &py);
    printf("x coordinate of point q: ");
    scanf("%lf", &qx);
    printf("y coordinate of point q: ");
    scanf("%lf", &qy);

    distance = sqrt((px-qx)*(px-qx) + (py-qy)*(py-qy));

    printf("Distance between p and q: %f\n", distance);

    return 0;
}