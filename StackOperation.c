/*Write a program to perform some stack operation (push,pop, print) using array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include <stdio.h>
#define SIZE 100

int top = -1,Stack[SIZE];
void push();
void pop();
void Display();

int main()
{
    int choice,n;

    printf("Perform operations on the stack:");
    printf("\n1.PUSH the element\n2.POP the element\n3.Display\n4.End\n");

    while (choice!=4)
    {
        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            printf("Program is End.\n");
            break;
        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("Stack Overflow! Can't add more element element to stack.");
    }
    else
    {
        printf("Enter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        Stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!Stack is empty.");
    }
    else
    {
        printf("Popped element: %d\n", Stack[top]);
        top = top - 1;
    }
}

void Display()
{
    if (top == -1)
    {
        printf("\nUnderflow!Stack is empty.");
    }
    else
    {
        printf("Elements present in the stack: \n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }
}
