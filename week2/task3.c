#include <stdio.h>

int main() {
    int a, b;
    float div;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (b == 0) {
        printf("denominator can't be 0\n");
        return 1;
    }
    div = (float)a / b;
    printf("%d / %d = %.2f\n", a, b, div);
    return 0;
}