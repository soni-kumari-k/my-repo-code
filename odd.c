#include<stdio.h>
int main()
{
    int num[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        num[i] = i + 1;
    }

    printf("Odd numbers:");

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            printf("\n%d", num[i]);
        }
    }

    return 0;
}