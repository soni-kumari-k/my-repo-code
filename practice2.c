#include <stdio.h>

    int add();
    int subtract();
    int multiply();
    int divide();
    

    int add()
    {
        int a = 50;
        int b = 10;
        printf("Add = %d\n", a + b);
    }

    int subtract()
    {
        int a = 50;
        int b = 10;
        printf("Subtract = %d\n", a - b);
    }
    int multiply()
    {
        int a = 45;
        int b = 20;
        printf("Multiply = %d\n", a * b);
    }
    int divide()
    {
        int a = 60;
        int b = 20;
        printf("Divide = %d\n", a / b);
    }

    int main()
    {
        add();
        subtract();
        multiply();
        divide();
    
    return 0;
    }
