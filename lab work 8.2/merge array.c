#include <stdio.h>
int main()
{
    int a[100], b[100], c[100], i, j, total, m, n;

    printf("enter size of array:");
    scanf("%d", &m);

    printf("\nenter A array element:\n");
    for (i = 0; i < m; i++)
    {
        printf("enter element %d:", i);
        scanf("%d", &a[i]);
    }

    printf("enter size of array:");
    scanf("%d", &n);

    printf("\nenter A array element:\n");
    for (i = 0; i < n; i++)
    {
        printf("enter element %d:", i);
        scanf("%d", &b[i]);
    }

    total = m + n;

    for (i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (i = m, j = 0; i < total; i++, j++)
    {
        c[i] = b[j];
    }
    printf("\nmerge array is:");
    for (i = 0; i < total; i++)
    {
        printf("%d", c[i]);
    }

    return 0;
}