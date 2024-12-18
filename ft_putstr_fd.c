/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:05:29 by marta             #+#    #+#             */
/*   Updated: 2024/12/18 12:05:37 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
		write(fd, s++, 1);
}
/*
int	main(void)
{
	ft_putstr_fd("Dolphins are cool\n", 1);
	return (0);
}
*/