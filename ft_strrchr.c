#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main(void)
{
	char	str[] = "Dolphins are cool!";
	printf("%s\n", ft_strrchr(str, 'o')); 
	printf("%s\n", ft_strrchr(str, 'z'));
	return (0);
}
*/