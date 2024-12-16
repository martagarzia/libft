#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	src[] = "Dolphins are cool!";
	char	dst[50];

	ft_memcpy(dst, src, 19);
	printf("%s\n", dst); // Output: "Dolphins are cool!"
	return (0);
}
