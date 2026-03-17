#include <stdio.h>
#include <string.h>

char *delete_first(char *s, char *pattern)
{
    char *p = strstr(s, pattern); // re mere
    if (p)
    {
        int pattern_len = strlen(pattern);

        memmove(p, p + pattern_len, strlen(p + pattern_len) + 1);
    }
}

int main()
{
    char word[] = "Ana are mere";
    char pattern[] = "re";
    delete_first(word, pattern);
    printf("%s\n", word);
    return 0;
}