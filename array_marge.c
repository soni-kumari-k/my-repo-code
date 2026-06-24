#include <stdio.h>
int main()
{
    int number1[5] = {1, 3, 5, 7, 9};
    int number2[3] = {2, 4, 6};
    int both[10]={0};
    int i;

    for (i = 0; i < 5; i++)
    {
        both[i] = number1[i];    
    }
 

    for ( i = 0; i < 3; i++)
    {
        both[5+i]=number2[i];
    }


    for ( i = 0; i < 8; i++)
    {
        printf(" %d ",both[i]);
    }
    

    return 0;
}