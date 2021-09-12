#include <stdio.h>
#include <conio.h>
int queue_a[20];
int rear=-1;
int front=-1;
void Insert(int x)
{
    if(rear == 20)
    printf("The Queue is OverFlow\n");

    else
    {
        if(front == -1)
        front=0;
        rear++;
        queue_a[rear]=x;
        printf("\n\tArray[%d] = %d\n",rear,x);
    }
}
void Delete(int x)
{

    if(front == -1 || front>rear)
    {
        printf("The Queue is UnderFlow\n");
        return;
    }
    else
    {
        printf("\n\t%d is deleted from you list.\n",queue_a[front]);
        front++;
    }
}
void Show()
{
    int i;
    if(front == -1)
        printf("\n\tqueue is empty\n");
    else
    {
        printf("queue element is :\n");
        for(i=front; i<=rear; i++)
            printf("%d\n",queue_a[i]);

    }
}
 int main()
{
    int ch,data;
    do
    {
        printf("\n\t\t\t-------------Menu-------------");
        printf("\n\t\t1.  Insertion");
        printf("\n\t\t2.  Deletion");
        printf("\n\t\t3.  Display");
        printf("\n\t\t4.  Exit");
        printf("\nEnter which operation do you want to do: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the value :");
                    scanf("%d",&data);
                    Insert(data);
                    break;
            case 2:
                    Delete(data);
                    break;
            case 3:
                    Show(data);
                    break;
            default:
                    exit(0);
        }
    }
    while(ch<4);
    return 0;
}

