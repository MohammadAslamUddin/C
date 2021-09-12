#include <stdio.h>

int main()
{
    int F,S,L1,L2,i,j,N,Data[20];

    printf("Enter the number of elements: ");
    scanf("%d",&N);

    printf("Enter %d elements for sort: ",N);
    for(i=1; i<= N; i++)
    {
        scanf("%d",&Data[i]);
    }

    F = Data[1];
    for(i = 1; i <= N; i++)
    {
        if(F <= Data[i])
        {
            F = Data[i];
            L1 = i;
        }
    }

    if (F == Data[1])
        S = Data[2];
    else
        S = Data[1];

    for(i = 1; i <= N; i++)
    {
        if(S <= Data[i] && F != Data[i])
           {
               S = Data[i];
               L2 = i;
           }
    }
    printf("Data[%d] = %d\nData[%d] = %d",L1,F,L2,S);
}
