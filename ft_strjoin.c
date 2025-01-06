/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:01 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 20:31:45 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strjoin
	Concatena le stringhe s1 e s2, 
	allocando dinamicamente una nuova stringa con malloc.
	ritorna:
	- se allocato: puntatore alla nuova stringa concatenata
	- se non allocato: NULL

	strlen
	size_t strlen(const char *s);

	malloc
	void *malloc( size_t size );
*/

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h> // malloc, size_t
/*
size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_lenght;
	size_t	s2_lenght;
	char	*ptr_concat;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	ptr_concat = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (ptr_concat == NULL)
		return (NULL);
	while (s1[i1] != '\0')
	{
		ptr_concat[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		ptr_concat[i1 + i2] = s2[i2];
		i2++;
	}
	ptr_concat[i1 + i2] = '\0';
	return (ptr_concat);
}
/*
int	main(void)
{
	char const	*string1 = "star";
	char const	*string2 = "fish";
	char	*concatenated;

	concatenated = ft_strjoin(string1, string2); // strjoin restitusice ptr
	if (concatenated == NULL)
		printf("NULL");
	else
		printf("%s\n", concatenated);
	free(concatenated);
	return (0);
}
*/