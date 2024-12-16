#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	buffer[50] = "Dolphins are cool!";
	ft_memset(buffer, 'A', 5);
	printf("%s\n", buffer);
	return (0);
}
*/