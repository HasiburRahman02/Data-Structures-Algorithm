/*Write a program to calculate combination using recursion.

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include <stdio.h>
int Combinations(int n, int r);

int main ()
{
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    int result=Combinations(n, r);
    if(result!=0)
    {
        printf ("\nValue Of %dC%d: %d\n", n,r,Combinations(n, r));
    }
}
int Combinations(int n, int r)
{
    if(n<r)
    {
        printf("\nInvalid input!! n should be greater than or equal r.\n");
        return 0;
    }
    else if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return Combinations(n - 1, r - 1) + Combinations(n - 1, r);
    }
}
