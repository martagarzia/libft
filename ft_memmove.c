/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:20:51 by mgarzia           #+#    #+#             */
/*   Updated: 2024/12/16 20:01:14 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	move_backward(unsigned char *dest,
	const unsigned char *source, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		dest[i] = source[i];
	}
}

static void	move_forward(unsigned char *dest,
	const unsigned char *source, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest > source)
		move_backward(dest, source, len);
	else
		move_forward(dest, source, len);
	return (dst);
}
/*
int	main(void)
{
	char	*str;

	str = "Dolphins are cool!";
	ft_memmove(str + 9, str, 9);
	printf("%s\n", str);
	return (0);
}
*/