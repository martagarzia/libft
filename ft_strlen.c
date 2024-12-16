#include "libft.h"
#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
/*
int main(void)
{
    char    *str;
    size_t  length;

    str = "Dolphins are cool";
    length = ft_strlen(str);
    printf("%zu\n", length);
    return (0);
}
*/