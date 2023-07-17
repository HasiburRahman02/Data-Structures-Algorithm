/*Write a program to sort some data using Bubble sort.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int i,j,size,temp;

    printf("Enter the Number of Elements in Array: ");
    scanf("%d",&size);
    int array[size];

    printf("\n");

    for(i=0; i<size ; i++)
    {
        printf("Enter the Element array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");

    printf("\nUnsorting list is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\nSorted list is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
