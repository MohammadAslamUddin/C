#include<stdio.h>

int main()
{
    int i, j, num, temp, arr[20];

    printf("Enter total elements: ");
    scanf("%d", &num);

    printf("Enter %d elements: ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < num; i++)
    {
        temp = arr[i];
        for (j=i-1; (temp < arr[j]) && (j >= 0); j--)
        {
            arr[j + 1] = arr[j];

        }
        arr[j + 1] = temp;
    }

    printf("After Sorting: ");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
