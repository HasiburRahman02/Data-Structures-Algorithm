/*Write a C program to print the factorial of a number using recursion.

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include<stdio.h>

int factorial(int number);

int main()
{
    int number,fact;

    printf("Enter a number:");
    scanf("%d",&number);
    printf("\n");

    fact=factorial(number);

    printf("Factorial of a Number %d is: %d",number,fact);
    printf("\n");
    return 0;
}

int factorial(int number)
{
    if(number>=1)
    {
        return number*factorial(number-1);
    }
    else
    {
        return 1;
    }
}
