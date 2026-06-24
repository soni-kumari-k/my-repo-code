#include <stdio.h>

int table();

int main()
{
    table();
    return 0;
}
int table()
{
    int num, i;

    printf("enter number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", num, i, num * i);
    }

    return 0;
}