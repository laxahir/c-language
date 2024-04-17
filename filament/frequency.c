#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0}, i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    printf("Frequency of each letter:\n");
    for (i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c => %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}