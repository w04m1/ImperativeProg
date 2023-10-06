#include <stdio.h>

void sumNum(int numbers[5], int *result)
{
    for (int i = 0; i < 5; i++)
    {
        *result += numbers[i];
    }
}

int main()
{
    int numbers[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    int result = 0;
    sumNum(numbers, &result);
    printf("%d", result);
}
