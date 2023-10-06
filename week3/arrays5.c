#include <stdio.h>

// Program that counts a weighted sum of 2 arrays or smth I don't know it's boring

int main()
{
    int fst[5] = {1,
                  2,
                  3,
                  4,
                  5};
    int snd[5] = {1,
                  1,
                  2,
                  3,
                  5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += fst[i] * snd[i];
    }

    printf("The sum or whatever it is equals to: %d", sum);
}
