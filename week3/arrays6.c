#include <stdio.h>

int main()
{
    int nums[10] = {
        112,
        2,
        3,
        4,
        5,
        1,
        7,
        8,
        9,
        10,
    };
    int min = 100;
    int minInd = 0;
    int max = nums[0];
    int maxInd = 0;

    printf("List before cigarettes: [");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d", nums[i]);
        }
        else
        {
            printf("%d, ", nums[i]);
        }

        if (nums[i] < min)
        {
            min = nums[i];
            minInd = i;
        }
        if (nums[i] > max)
        {
            max = nums[i];
            maxInd = i;
        }
    }
    printf("]\n");

    nums[maxInd] = min;
    nums[minInd] = max;

    printf("List after: [");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d", nums[i]);
        }
        else
        {
            printf("%d, ", nums[i]);
        }
    }
    printf("]\n");
}