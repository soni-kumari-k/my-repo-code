#include<stdio.h>
int main()
{
int num[10]={1,2,3,4,5,6,7,8,9,10};
int num1[10];
int i;

for ( i = 0; i < 10; i++)
{
    num1[i]=i+1;
}
printf("even number");

for ( i = 0; i < 10; i++)
{
    if (num[i] %2== 0)
        {
            printf("\n%d", num1[i]);
        }
}


    return 0;
}