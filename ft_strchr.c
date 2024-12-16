#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Dolphins are cool!";
	printf("%s\n", ft_strchr(str, 'a')); 
	printf("%s\n", ft_strchr(str, 'z'));
	return (0);
}
*/