#include <stdio.h>
// #include <string.h>

// Program that calculates the length of a string

int main()
{
    char a[100];
    scanf("%99s", a);
    // it to easy ;)
    // int length = strlen(a);
    int length = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
