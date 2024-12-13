#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	char	test_char;

	test_char = '2';
	printf("%d\n", ft_isdigit(test_char));
	return (0);
}
