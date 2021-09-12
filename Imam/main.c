#include <stdio.h>
#include <string.h>
main()
{
    char name[100][100], tname[100][100], temp[100];
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d names: \n",n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
    }
    for (i = 1; i <= n ; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\t\tInput Names\tSorted names\n");
    for (j = 1; j <= n; j++)
    {
        printf("%d\t\t%s\t\t%s\n",j, tname[j], name[j]);
    }
}
