/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:32:23 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:42:12 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int		c;

	const char *str = "Dolphins Are Cool";
	c = 0;
	while (str[c] != '\0')
	{
		printf("%c", ft_toupper(str[c]));
		c++;
	}
	printf("\n");
	return (0);
}
*/