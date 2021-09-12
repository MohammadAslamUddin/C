#include <stdio.h>
#define Q_SIZE 20


struct queue
{
    int a[Q_SIZE];
    int front,rear;
} q;


void insert()
{
    int x;
    if(q.rear==Q_SIZE-1)
        printf("\n\nQueue full.insertion not possible");
    else
    {
        printf("\nEnter data to insert :");
        scanf("%d",&x);
        q.rear++;
        q.a[q.rear]=x;
    }
}


void deleteq()
{
    if (q.front==q.rear)
        printf("\n\nQueue is empty.Deletion not possible.");
    else
    {
        ++q.front;
        printf("\n\nThe deleted element is %d",q.a[q.front]);
    }
}


void show()
{
    int i;
    if (q.front==q.rear)
        printf("\n\nQUEUE Empty");
    else
    {
        printf("\n\nThe element is the queue:\n");
        printf("******************\n");

        printf("\tFront--->");
        for(i=q.front+1; i<=q.rear; i++)
            printf("%d",q.a[i]);
        printf("<---Rear\n");
    }
}


void  main()
{
    int n,i,ch;
    q.front=q.rear=-1;
    printf("\nNo. of elements initially in the queue: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        q.rear++;
        printf("\n\tEnter the element:");
        scanf("%d",&q.a[i]);
    }
    show();
    while(1)
    {
        printf("\n\n\t\tSelect your choice:");
        printf("\n\t1->Insertion");
        printf("\n\t2->Deletion");
        printf("\n\t3->Exit");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            insert();
            show();
            break;

        case 2 :
            deleteq();
            show();
            break;

        case 3 :
            exit(0);
        }
    }
}
