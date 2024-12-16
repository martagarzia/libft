#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	character;
	
	character = 'a';
	printf("%d\n", ft_isalpha(character));
	return (0);
}
*/