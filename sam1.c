#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char    *str;
    int     i = 0;
    int     j = 0;
    int     count;

    str = malloc(sizeof(char) * 100);
    scanf("%s", str);
    while (j < 26)
    {
        count = 0;
        i = 0;
        while (str[i])
        {
            if (str[i] == 'a' + j)
                count++;
            i++;
        }
        printf("%c: %d\n", 'A' + j, count);
        j++;
    }
    free(str);
}