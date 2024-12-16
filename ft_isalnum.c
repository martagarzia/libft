#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}
/*
int main(void)
{
    char test_char;

    //test_char = '#';
    test_char = 'D';
    printf("%d\n", ft_isalnum(test_char));
    return (0);
}
*/