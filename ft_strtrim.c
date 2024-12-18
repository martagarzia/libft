/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:12:09 by marta             #+#    #+#             */
/*   Updated: 2024/12/18 12:12:18 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	end = strlen(s1);
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	strncpy(trimmed, &s1[start], end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	char	*result;

	result = ft_strtrim("xxDolphinsxx", "x");
	printf("ft_strtrim: %s\n", result);
	free(result);
	return (0);
}
*/