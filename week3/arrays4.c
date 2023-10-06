#include <stdio.h>

// Program that finds the second lowest int in array

int secondLowest(int nums[9])
{
    // we can use INT_MAX from limits.h but that's not really needed
    int min1 = 100;
    int min2 = 100;
    for (int i = 0; i < 9; i++)
    {
        if (nums[i] < min1)
        {
            min2 = min1;
            min1 = nums[i];
        }
        else if (nums[i] < min2)
        {
            min2 = nums[i];
        }
    }
    return min2;
}

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
    int snd = secondLowest(nums);
    printf("Second lowest int: %d", snd);
}
