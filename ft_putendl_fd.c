#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (s && *s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("Dolphins are cool", 1);
	return (0);
}
