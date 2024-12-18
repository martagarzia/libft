/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:12:09 by mgarzia           #+#    #+#             */
/*   Updated: 2024/12/18 15:40:21 by marta            ###   ########.fr       */
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
