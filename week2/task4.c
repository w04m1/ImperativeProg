#include <stdio.h>

int main() {
    float len, rad, squareArea, circleArea, pi;
    pi = 3.1415;
    printf("Enter a length of the square: ");
    scanf("%f", &len);
    printf("Enter a radius of the circle: ");
    scanf("%f", &rad);
    if (len <= 0 || rad <= 0) {
        printf("values can't be smaller than 0\n");
        return 1;
    }
    squareArea = len * len;
    circleArea = pi * rad * rad;
    printf("Circle area: %.2f\n", circleArea);
    printf("Square area: %.2f\n", squareArea);
    return 0;
}