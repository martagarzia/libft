/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:27:45 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/01 23:21:06 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calcola la lunghezza di una stringa 
escluso il carattere di terminazione null \0.
Riceve come argomento un puntatore a un array di caratteri (const char *).

const char è sola lettura, 
le stringhe letterali sono allocate in una memoria di sola lettura.
*/

/* #include <stdio.h> */
//#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*string;

	string = "Dolphins are cool!";
	printf("%zu\n", ft_strlen(string));
	return (0);
}
*/