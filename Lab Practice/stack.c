#include <stdio.h>

struct stack
{
    int a[20],top;
}s;

int Push(int x)
{
    if(s.top == 20)
        printf("The stack is full");
    else
    {
        s.top++;
        s.a[s.top] = x;
        printf("%d is added to position %d",x,s.top);
    }
}

int Pop()
{
    if(s.top == -1)
        printf("The stack is underflow");
    else
    {
        printf("%d is deleted from your stack",s.a[s.top]);
        s.top--;
    }
}

int Show()
{
    int i;
    if(s.top == -1)
        printf("The stack is empty");
    else
    {
        printf("The data are: \n");
        for(i = 0; i<= s.top; i++)
            printf("%d\t", s.a[i]);
        printf("<---top\n");
    }
}

void main()
{
    int ch,data;

    s.top = -1;
    do{
        printf("Menu\n\t1.Push\n\t2.Pop\n\t3.Show\n\t4.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the value: ");
                scanf("%d", &data);
                Push(data);
                break;
            case 2:
                Pop();
                break;
            case 3:
                Show();
                break;
            case 4:
                exit(0);
        }
    }while(ch < 4);
    getch();
}
