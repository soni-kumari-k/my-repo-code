#include<stdio.h>
int main()
{

    char name[30];
    char sub[5];
    int marks[5];
    int i;
    int total=0;
    float percentage;

    printf("enter your name: ");
    scanf(" %s", name);

    printf("*****enter your subject and marks***** \n");

    for ( i = 0; i < 5; i++)
    {
        printf("enter your subject: ");
        scanf("%s", sub);
        printf("  enter yourmarks%d ",i+1);
        scanf("%d",&marks[i]);

        total=total+marks[i];
    }
    
    percentage = (float)total / 5;

    printf("||||||| RESULT |||||||\n");
    printf(" Name = %s\n**",name);
     printf(" Total Marks = %d\n**", total);
    printf(" Percentage = %.2f\n**", percentage);

return 0;
}