// REVERSED STRING USING POINTERS

#include <stdio.h>

int main()
{

    char word[25];
    char *start = word;
    char *end = word;
    int length = 0;

    printf("Enter the word: ");
    scanf("%s", word);

    while (*end)
    {
        length++;
        end++;
    }
    end--; // end = length-1

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("Reversed: %s", word);

    return 0;
}