#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = 1;
	while (n && len++)
		n /= 10;
	str = malloc(len + (nb < 0) + 1);
	if (!str)
		return (NULL);
	str[len + (nb < 0)] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len--)
	{
		str[len + (nb < 0)] = '0' + (nb % 10);
		nb /= 10;
	}
	if (str[0] == '\0')
		str[0] = '-';
	return (str);
}

int	main(void)
{
	char	*result;

	result = ft_itoa(-42);
	printf("ft_itoa: %s\n", result);
	free(result);
	return (0);
}
