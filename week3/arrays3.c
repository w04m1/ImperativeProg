#include <stdio.h>

// Program that finds the greatest number in array

int main()
{
    int nums[9] = {
        8,
        2,
        5,
        30,
        20,
        16,
        12,
        50,
        40,
    };
    int greatest = 0;
    for (int i = 0; i < 9; i++)
    {
        if (greatest < nums[i])
        {
            greatest = nums[i];
        }
    }
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
