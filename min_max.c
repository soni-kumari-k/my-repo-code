#include<stdio.h>
int main()
{
int num[10]={15,22,5,18,28,13,9,54,36,23};
int i;
int min,max;

min=num[0];
max=num[0];
for ( i = 0; i <10; i++)
{
    if (num[i]<min)
    {
        min=num[i];
    }

    if (num[i]>max)
    {
         max=num[i];
    }
}

printf("minimum=%d\n",min);
printf("maximum=%d\n",max);

    return 0;
}