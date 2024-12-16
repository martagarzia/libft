#include "libft.h"
#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}
/*
int main(void)
{
    int c;

    c = 65; 
    if (ft_isprint(c) == 1)
        printf("%c 1\n", c);
    else
        printf("%c 2\n", c);
    return (0);
}
*/