#include <stdio.h>

int main()
{
    int a[100], i, first, second, count;
    printf("enter first year:");
    scanf("%d", &first);

    printf("enter second year:");
    scanf("%d", &second);

    printf("leap year is:");
    for (i = first; i <= second; i++)
    {
        if (i % 4 == 0)
        {
            a[count] = i;
            count++;
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}