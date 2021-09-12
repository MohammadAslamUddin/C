#include <stdio.h>
#define Q_size 20

struct stack
{
    int rear,front,a[Q_size];
} q;


void push()
{
    int x;
    if(q.rear == Q_size-1)
        printf("The queue is full");
    else
    {
        printf("Enter the value: ");
        scanf("%d",&x);
        q.rear++;
        q.a[q.rear] = x;
    }
}


void pop()
{
    if(q.front == q.rear)
        printf("The queue is empty");
    else
    {
        ++q.front;
        printf("The deleted element is: %d",q.a[q.front]);
    }
}


void show()
{
    int i;
    if(q.front == q.rear)
        printf("The queue is empty.");
    else
    {
        printf("The element are: ");
        printf("\nFront--->");
        for(i = q.front+1; i <= q.rear; i++)
            printf("%d\t",q.a[i]);
        printf("<---Rear");
    }
}


void main()
{
    int ch,i,n;

    q.front = q.rear = -1;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        q.rear++;
        printf("Enter the element: ");
        scanf("%d",&q.a[i]);
    }
    show();
    while(1)
    {
        printf("Menu");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:push();
            show();
            break;
        case 2:
            pop();
            show();
            break;
        case 3:
            exit(0);
        }
    }
}
