#include <stdio.h>
main()
{
    int DATA[50],N,K,MAX,LOC;
    scanf("%d",&N);//How many number will you take for your input.
    for(K=1; K<=N; K++)
        {
            scanf("%d",&DATA[K]);//this loop works for inputing the value.
        }
    MAX = DATA[1];
    for (K=2; K<=N; K++)//this loop will compare each number with another positions number.
    {
        if(MAX<DATA[K])//comparing the value
        {
            MAX=DATA[K];//will receive the value number
            LOC=K;// will receive its position.
        }
    }
    printf("Max = %d & Locate = %d", MAX,LOC);//display the large number and its position.
}
