#include<stdio.h>
int main()
{
char name[20];
int student_id;
int student_class;
int roll_no;
int age;
char email[25];
char address[60];

printf("please enter your name: ");
scanf(" %s",name);
printf("enter your id number: ");
scanf(" %d",&student_id);
printf("enter your class: ");
scanf(" %d",&student_class);
printf("enter your roll no.: ");
scanf(" %d",&roll_no);
printf("enter your age: ");
scanf(" %d",&age);
printf("enter your email: ");
scanf(" %s",email);
printf(" enter your address \n");
scanf("%s",address);

printf("\n###### STUDENT ID CARD ######\n");
printf("Name=%s\n",name);
printf("Student ID=%d\n",student_id);
printf("Student class=%d\n",student_class);
printf("Roll No.=%d\n",roll_no);
printf("Age=%d\n",age);
printf("email=%s\n",email);
printf("address=%s\n",address);


    return 0;
}