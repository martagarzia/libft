#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	**split;
	int		i;

	split = ft_split("Dolphins are cool", ' ');
	i = 0;
	while (split[i])
	{
		printf("ft_split[%d]: %s\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}
