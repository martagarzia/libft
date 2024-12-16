#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	main(void)
{
	char	*str = "Dolphins are cool!";
	char	*dup = ft_strdup(str);

	printf("%s\n", dup);
	free(dup);
	return (0);
}
