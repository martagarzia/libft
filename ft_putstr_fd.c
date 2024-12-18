#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
		write(fd, s++, 1);
}

int	main(void)
{
	ft_putstr_fd("Dolphins are cool\n", 1);
	return (0);
}
