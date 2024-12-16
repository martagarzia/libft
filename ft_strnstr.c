#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i + n_len <= len)
	{
		if (ft_strncmp(&haystack[i], needle, n_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	haystack[] = "Dolphins are cool!";
	char	needle[] = "are";
	printf("%s\n", ft_strnstr(haystack, needle, 19));
	printf("%s\n", ft_strnstr(haystack, "z", 19));
	return (0);
}
