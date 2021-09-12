#include<stdio.h>
#include<conio.h>


struct node
{
    char data;
    struct node *next;
};


typedef struct node *nodeptr;
nodeptr prenode,first;

nodeptr getnode()
{
    nodeptr d;
    d=(nodeptr) malloc(sizeof(struct node));
    return d;
}


nodeptr insafter(nodeptr p,char x)
{
    nodeptr newnode;
    if (p==NULL)
    {
        printf("\n Void insertion:");
        exit(1);
    }
    newnode=getnode();
    newnode->data=x;
    newnode->next=prenode->next;
    prenode->next=newnode;
    return newnode;
}


void createlist()
{
    char vow[]= {'a','e','i','o','u'};
    int i;
    prenode=first=getnode();
    prenode->data=vow[0];
    prenode->next=NULL;
    fflush(stdin);
    for(i=1; i<6; i++)
        prenode=insafter(prenode,vow[i]);
}


void show()
{
    prenode=first;
    while (prenode->next!= NULL)
    {
        printf("%c---->",prenode->data);
        prenode=prenode->next;
    }
    printf("NULL");
}


void main()
{
    createlist();
    printf("\nThe created List");
    printf("\n*****************\n\n");
    show();
    getch();
}
