/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:28 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/07 11:29:12 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strtrim
Rimuove tutti i caratteri presenti in s2, 
dalla parte iniziale e finale della stringa s1.
ritorna:
- se alloca = puntatore alla strings risultate
- se non alloca = NULL

strlcpy
copia da una stringa a un buffer,
un numero di caratteri massimo a d_size -1,
perchè aggiunge \0.
ritorna:
- lunghezza stringa source.
- altrimenti NULL

strchr
scasiona *str carattere per carattere (compreso '\0')
cerca c
ritrna:
- se lo trova = puntatore all' indirizzo del carattere
- se non lo trova = NULL

malloc
void *malloc( size_t size );

*/

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h> // malloc, size_t, NULL
/*
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

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

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
*/
char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	a;
	size_t	z;
	char	*ptr_strim;

	a = 0;
	z = ft_strlen(s1);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while ((s1[a] != '\0') && (ft_strchr(s2, s1[a]) != NULL))
		a++;
	while ((z > a) && (ft_strchr(s2, s1[z -1])) != NULL)
		z--;
	ptr_strim = (char *)malloc(sizeof(char) * (z - a + 1));
	if (ptr_strim != NULL)
		ft_strlcpy(ptr_strim, &s1[a], z - a + 1);
	return (ptr_strim);
}
/*
int	main(void)
{
	char const *string1;
	char const *string2;
	char	*trim;

	string1 = "fishbowl";
	string2 = "bowl"; 
	// string2 = "fish";
	// string2 = NULL;
	
	trim = ft_strtrim(string1, string2);
	if (trim != NULL)
		printf("%s\n", trim);
	else
		// printf("null\n");
		printf("%p\n", trim);
	free(trim);
	return (0);
}
*/