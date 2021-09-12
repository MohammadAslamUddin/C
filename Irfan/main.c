#include <stdio.h>

int main()
{
    int ch,data;
    do
    {
        printf("\n\t\t\tMenu");
        printf("\n\t\t1->Push");
        printf("\n\t\t2->Pop");
        printf("\n\t\t3->List stack");
        printf("\n\t\t4->Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        }
    }
    while(ch<4);
    getchar();
}
struct stack
{
    int a[20];
    int top,front;
} s;

void push(int x)
{
    if(s.top == 20)
        printf("Stack full");
    else
    {
        s.top++;
        s.a[s.top] = x;
        printf("\n\tData is added to stack\n");
    }
}
