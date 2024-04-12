#include <stdio.h>

int main()
{
    int a[100], i, size;
    printf("enter array size:");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("array square is:");
    for (i = 0; i < size; i++)
    {
        printf("%d,", a[i] * a[i]);
    }
    return 0;
}