/*Write a program to search specific data from a list using Linear search.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()
{
    int toFind, i, size,count;

    printf("Enter the number of elements in array:");
    scanf("%d", &size);
    int array[size];

    printf("\n");

    for (i = 0; i < size; i++)
    {
        printf("Enter the Element of array[%d]: ",i);
        scanf("%d", &array[i]);
    }

    printf("\nThe Element of Array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    printf("\nEnter element to be search: ");
    scanf("%d", &toFind);

    count=0;
    for(i=0; i < size; i++)
    {
        if(array[i] == toFind)
        {
            printf("\n%d is found at position %d.\n", toFind, i + 1);
            count++;
        }
    }
    if(count==0)
    {
        printf("\n%d is not found in the array.\n", toFind);
    }
    return 0;
}
