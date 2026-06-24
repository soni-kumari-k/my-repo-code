#include<stdio.h>
int main()
{
int num[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
int x,y;


for ( x = 0; x < 4; x++)
{
    
    for ( y = 0; y < 5; y++)
    {
        printf(" %d ", num[x][y]);
    }
     printf("\n");

}
   


    return 0;
}