#include <stdio.h>

int main()
{
    char str[100], i;
    int Palindrome = 1, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}