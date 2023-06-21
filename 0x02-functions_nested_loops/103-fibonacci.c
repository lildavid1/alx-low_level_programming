#include "main.h"

int main(void)
{
    int prev = 1;
    int curr = 2;
    int sum = 0;

    while (curr <= 4000000)
    {
        if (curr % 2 == 0)
        {
            sum += curr;
        }

        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("%d\n", sum);

    return 0;
}
