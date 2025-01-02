/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:27:37 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 17:03:46 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copia da una stringa a un buffer,
un numero di caratteri massimo a d_size -1,
perchè aggiunge \0.

ritorna lunghezza stringa source.
*/

// #include <stdio.h>
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *d, const char *s, size_t d_size)
{
	size_t	i;
	size_t	s_size;

	i = 0;
	s_size = 0;
	while (s[s_size] != '\0')
		s_size++;
	if (d_size > 0)
	{
		while (s[i] != '\0' && i < (d_size - 1))
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (s_size);
}
/*
int	main(void)
{
	char	buffer_d[10];
	char	string_s[] = "goldfish";

	//printf("destination before: %s\n", buffer_d);
	ft_strlcpy(buffer_d, string_s, 5); // 5 - 1
	printf("destination after: %s\n", buffer_d);
	return (0);
}
*/