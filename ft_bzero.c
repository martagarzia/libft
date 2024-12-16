#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	buffer[50] = "Dolphins are cool!";
	ft_bzero(buffer, 5);
	printf("%s\n", buffer + 5); // Prints remaining string after 5 bytes.
	return (0);
}
*/