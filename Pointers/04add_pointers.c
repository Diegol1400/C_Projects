/*
Write a program in C to add two numbers using pointers.

Test Data :
Input the first number : 5
Input the second number : 6

Expected Output :

The sum of the entered numbers is : 11 
*/

#include <stdio.h>

int main()
{
    int x = 10, y =10;
    int *p = &x, *z= &y;

    printf("The result is %d", *p+*z);

    return 0;
}
