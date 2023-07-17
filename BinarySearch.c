/* Write a program to search specific data from a list using Binary search.

   Author:Hasibur Rahman(13/21|CSE-02)

*/
#include<stdio.h>
int main()
{
    int i, size, item, start, end, middle;

    printf("\nHow many elements you want to enter in the array : ");
    scanf ("%d",&size);
    int array[size];

    printf("\nEnter the elements of array in ascending order: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nEnter element to be search: ");
    scanf("%d", &item);

    start = 0;
    end = size-1;
    middle = (start+end)/2;

    while(start <= end && array[middle]!=item)
    {
        if(array[middle]<item)
        {
            start = middle+1;
        }
        else
        {
            end = middle-1;
        }
         middle = (start+end)/2;
    }
    if(array[middle]==item)
    {
        printf("\nThe number, %d found at Position %d.\n", item, middle+1);
    }
    if(start>end)
    {
         printf("\nThe number, %d is not found in given Array.\n", item);
    }
}
