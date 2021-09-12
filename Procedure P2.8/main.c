#include <stdio.h>

int main()
{
    int N,K,DATA[50],LOC1,LOC2,First,Second;
    printf("Enter the number of Elements as N: ");
    scanf("%d",&N);
    printf("Now enter the %d elements: \n",N);
    for(K=1; K<=N; K++)
    {
        scanf("%d",&DATA[K]);
    }
    First=DATA[1];
    for(K=1; K<=N; K++)
    {
        if(First<=DATA[K])
        {
            First=DATA[K];
            LOC1=K;
        }
    }
    if(First!= DATA[1])
        Second = DATA[1];
    else
        Second = DATA[2];
    for(K=1; K<=N; K++)
    {
        if(Second<=DATA[K] && DATA[K]!= First)
        {
            Second=DATA[K];
            LOC2=K;
        }
    }
    printf("Data[%d] = %d\nData[%d] = %d",LOC1,First,LOC2,Second);
    return 0;
}
