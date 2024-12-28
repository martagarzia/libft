/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:18:22 by mgarzia           #+#    #+#             */
/*   Updated: 2024/12/28 18:24:01 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int if the character is alphanumeric*/

/* #include <stdio.h> */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	char alphanumber;

	alphanumber = 'a';
	//alphanumber = '2';
	//alphanumber = '%';
	printf("%d\n", ft_isalnum(alphanumber));
	return (0);
}
*/
