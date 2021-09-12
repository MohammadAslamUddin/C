#include <stdio.h>

struct tree
{
    char data;
    struct tree*left;
    struct tree* right;
};
typedef struct tree btree;
btree*root,*Stack[50];
int Top=0;
int main()
{
    char data;
    printf("Enter the elements :");
    scanf("%c",&data);
    void INORD()
    {
        btree*PTR;
        PTR=root;
        printf("The INORD form is\n :");
        Top=0;
        Stack[Top]=NULL;
        {
label:
            while(PTR!=NULL)
            {
                push(PTR);
                Top++;
                Stack[Top]=PTR;
                PTR=PTR->left;
            }
            PTR=pop();
            {
                PTR=Stack[Top];
                Top--;
            }
            while(PTR!=NULL)
            {
                printf("%c",PTR->data);
                if(PTR->right!=NULL)
                {
                    PTR=PTR->right;
                    goto label;
                }
                PTR=pop();
                PTR=Stack[Top];
                Top--;
            }
            printf("%c\n",PTR);
        }

        return 0;
    }
}

