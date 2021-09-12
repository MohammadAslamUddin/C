#include<stdio.h>


struct node
{
    char data;
    struct node *next;
};


typedef struct node *nodeptr;
nodeptr prenode,first;/* Get node Function */
nodeptr getnode()
{
    nodeptr d;
    d=(nodeptr) malloc(sizeof(struct node));
    return d;
}/* Function for insertion after a node */


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


void createlist() /* Function for creation */
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


void show() /* Function for displaying the list */
{
    prenode=first;
    while (prenode->next!= NULL)
    {
        printf("%c---->",prenode->data);
        prenode=prenode->next;
    }

    printf("NULL");
}


void main() /* Main Function */
{
    createlist();
    printf("\nThe created List");
    printf("\n*****************\n\n");
    show();
    getch();
}
