#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && (d_len + i < dstsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

int	main(void)
{
	char	dst[30] = "Dolphins";
	char	src[] = " are cool!";
	printf("%zu\n", ft_strlcat(dst, src, 20)); // Output: 19
	printf("%s\n", dst); // Output: "Dolphins are cool!"
	return (0);
}
