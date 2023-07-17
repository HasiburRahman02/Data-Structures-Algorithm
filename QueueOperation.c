/*Write a program to perform some queue operation(enqueue, dequeue, display) using array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include <stdio.h>
#define MAX 50

void enqueue();
void dequeue();
void display();

int queue_array[MAX];
int rear = - 1;
int front = - 1;

int main()
{
    int choice,n;

    printf("Perform operations on the Queue:");
    printf("\n1.ENQUEUE\n2.DEQUEUE\n3.Display\n4.End\n");

    while (choice!=4)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                    enqueue();
                    break;
            case 2:
                    dequeue();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    printf("Program is End.\n");
                    break;

            default:
                    printf("\nInvalid choice!!");
        }
    }
}

void enqueue()
{
    int add_item;
    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if (front == - 1)
        {
            front = 0;
        }
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == - 1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}
