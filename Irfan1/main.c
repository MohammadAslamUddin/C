#include <stdio.h>

int queue_a[20],rear=-1,front=-1;
void insert(int x)
{
    if(rear == 20)
    printf("queue Overflow\n");

    else
    {
        if(front == -1)
        front=0;
        rear++;
        queue_a[rear]=x;
        printf("\n\tData is insert the element in queue :\n");
    }
}
void delete(int x)
{

    if(front == -1 || front>rear)
    {
        printf("queue Underflow\n");
        return;
    }
    else
    {
        printf("\n\tThe delete from queue is :%d\n",queue_a[front]);
        front++;
    }
}
void show()
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
        printf("\n\t\t\tMenu");
        printf("\n\t\t1->insert");
        printf("\n\t\t2->delete");
        printf("\n\t\t3->show");
        printf("\n\t\t4->Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the data :");
                    scanf("%d",&data);
                    insert(data);
                    break;
            case 2:
                    delete(data);
                    break;
            case 3:
                    show(data);
                    break;
            case 4:
                    exit(0);
        }
    }
    while(ch<4);
    return 0;
}
