#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Dolphins are cool!";
	printf("%s\n", (char *)ft_memchr(str, 'a', 19)); 
	printf("%s\n", (char *)ft_memchr(str, 'z', 19));
	return (0);
}
*/