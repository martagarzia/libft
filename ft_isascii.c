/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:19:05 by mgarzia           #+#    #+#             */
/*   Updated: 2024/12/28 18:24:08 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int if the character is ASCII*/

/* #include <stdio.h> */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	return (0);
}
/*
int main(void)
{
	char character;
	
	//character = 'a';
	//character = '2';
	//character = '%';
	//
	//character = 200;
	character = 'è';
	printf("%d\n", ft_isascii(character));
	return (0);
}
*/