#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	int		c;

    //c = 200; 
	c = 65;
	printf("%d\n", ft_isascii(c));
	return (0);
}
