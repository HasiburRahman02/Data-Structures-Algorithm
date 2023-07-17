/*Write a program to print Fibonacci series using recursion.

  Author:Hasibur Rahman(13/21|CSE-02)

*/


#include<stdio.h>
int fibonacci(int n);

int main()
{
	int size, n;
	printf("Enter the number of terms:");
	scanf("%d",&size);
	printf("Fibonacci series is :");

	for(n=0;n<size ;n++)
	{
	    printf("%d ",fibonacci(n));
	}
}

int fibonacci(int n)
{
	if(n==0)
	{
	    return 0;
	}
	else if(n==1)
    {
        return 1;
    }
	else
	{
	    return (fibonacci(n-1)+fibonacci(n-2));
	}
}
