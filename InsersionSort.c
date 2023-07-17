/*Write a program to sort some data using Insersion sort.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int i,hole,k,size,temp;

    printf("Enter the Number of Elements in Array: ");
    scanf("%d",&size);
    int array[size];

    printf("\n");

    for(i=0; i < size ; i++)
    {
        printf("Enter the Element of array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");

    printf("\nUnsorting list is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    for(i=1;i<size;i++)
    {
        temp=array[i];
        for(hole=i-1;hole>=0 && array[hole]>temp;hole--)
        {
            array[hole+1]=array[hole];
        }
        array[hole+1]=temp;
    }
    printf("\nSorted List is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
