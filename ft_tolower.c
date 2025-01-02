/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:12:09 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:42:09 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	int		c;
	char	*str;

	str = "Dolphins Are Cool";
	c = 0;
	while (str[c] != '\0')
	{
		printf("%c", ft_tolower(str[c]));
		c++;
	}
	printf("\n");
	return (0);
}
*/
