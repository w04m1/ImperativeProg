#include <stdio.h>

// Program that fills an array with zeros

int main()
{
    // task 1
    int a;
    printf("%d\n", a);

    // task 2
    printf("Enter number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("it's even\n");
    }
    else
    {
        printf("it's odd\n");
    }

    // task 3

    if (a > 0)
    {
        printf("it's positive\n");
    }
    else if (a < 0)
    {
        printf("it's negative\n");
    }
    else
    {
        printf("it's zero :)\n");
    }

    // others are not really programming so that's it
}
