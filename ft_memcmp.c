#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "Dolphins";
	char	str2[] = "Dolphins are cool!";
	printf("%d\n", ft_memcmp(str1, str2, 8));
	printf("%d\n", ft_memcmp(str1, str2, 10));
	return (0);
}
