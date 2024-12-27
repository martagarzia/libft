/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:18:47 by mgarzia           #+#    #+#             */
/*   Updated: 2024/12/27 16:17:51 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns non-zero int if character is letter */

/* #include <stdio.h> */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	character;
	
	character = 'a';
	printf("%d\n", ft_isalpha(character));
	return (0);
}
*/