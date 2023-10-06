#include <stdio.h>

// Program that fills an array with zeros

int main()
{
    int n;
    printf("Enter how many zeros you want: ");
    scanf("%d", &n);
    int zeros[n];
    for (int i = 0; i < n; i++)
    {
        zeros[i] = 0;
    }
    printf("Here are your zeros: [");
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", zeros[i]);
            break;
        }
        printf("%d, ", zeros[i]);
    }
    printf("]\n");
}
