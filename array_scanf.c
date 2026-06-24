#include<stdio.h>
int main()
{
char name[3][20];
int hindi[3];
int english[3];
int science[3];
int marks[3];
int i,j;

for ( i = 0; i <3; i++)
{
   printf("please entery your name: ");
   scanf(" %[^\n]",name[i]);

    printf("enter your hindi marks: ");
    scanf(" %d",&hindi[i]);
   
     printf("enter your english marks: ");
    scanf(" %d",&english[i]);
   
    printf("enter your science marks: ");
    scanf(" %d",&science[i]);
  
}
    printf("*****__STUDENT RECORD__*****\n");

for ( j = 0; j < 3; j++)
{
    printf(" ||||%s||||\n",name[j]);
    printf("Hindi= %d\n",hindi[j]);
    printf("English= %d\n",english[j]);
    printf("Science= %d\n",science[j]);

}
    return 0;
}