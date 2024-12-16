#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t  i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	char	dst[20];
	char	src[] = "Dolphins are cool!";
	printf("%zu\n", ft_strlcpy(dst, src, 10)); 
	printf("%s\n", dst);
	return (0);
}
