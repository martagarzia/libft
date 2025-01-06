/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:47:35 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 17:45:37 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> // printf
#include "libft.h"
#include <stdlib.h> // malloc, size_t

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_sub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr_sub = malloc(len + 1);
	if (ptr_sub == NULL)
		return (NULL);
	while (1 < len && s[start + i] != '\0')
	{
		ptr_sub[i] = s[start + i];
		i++;
	}
	ptr_sub[i] = '\0';
	return (ptr_sub);
}
/*
int	main(void)
{
	const char	*string_source = "firefighter";
	char	*string_sub;

	string_sub = ft_substr(string_source, 4, 5);
	if (string_sub != NULL)
	{
		printf("%s\n", string_sub);
		free(string_sub);
	}
	else
		printf("null");
	return (0);
}
*/