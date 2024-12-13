#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	int		c;
	char	*str;

	str = "Dolphins Are Cool";
	c = 0;
	while (str[c] != '\0')
	{
		printf("%c", ft_toupper(str[c]));
		c++;
	}
	printf("\n");
	return (0);
}
