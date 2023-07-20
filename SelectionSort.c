/*Write a program to sort some data using Selection sort.

  Date: 21 July,2023
  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int i,j,size,smallest,temp;

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

    //Selection Sort
    for(i=0;i<size-1;i++)
    {
        //Find the smallest element
        smallest=i;
        for(j=i+1;j<size;j++)
        {
            if(array[smallest]>array[j])
            {
                smallest=j;
            }
        }
        if(i != smallest)
        {
            temp=array[i];
            array[i]=array[smallest];
            array[smallest]=temp;
        }
    }
    printf("\nSorted list is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

