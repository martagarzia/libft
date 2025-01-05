/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:28:11 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/05 23:26:15 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stddef.h>
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
*/
/*
size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}
*/
char	*ft_strnstr(const char *src, const char *sub, size_t n)
{
	size_t	i;
	size_t	sub_l;

	i = 0;
	sub_l = ft_strlen(sub);
	if (sub[0] == '\0')
		return ((char *)src);
	while ((i < n) && (i + sub_l <= n))
	{
		if (ft_strncmp(&src[i], sub, sub_l) == 0)
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*found;

	char	source_string[] = "firefighters";

	// char	substring[] = "fire";
	// char	substring[] = "cat";
	// found = (ft_strnstr(source_string, substring, 7));

	char	substring[] = "fighter";
	found = (ft_strnstr(source_string, substring, 14));

	if (found != NULL)
		printf("%s\n", found);
	else
		printf("%p\n", found);
	return (0);
}
*/