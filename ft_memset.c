/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:21:07 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:41:27 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fills  the first n bytes of the memory area 
pointed to by s 
with the constant byte c. 
*/

//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	buffer[30] = "Dolphins are cool!";
	
	ft_memset(buffer, '%', 5);
	printf("%s\n", buffer);
	return (0);
}
*/