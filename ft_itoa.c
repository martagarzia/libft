/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:04:07 by marta             #+#    #+#             */
/*   Updated: 2024/12/18 15:59:57 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length++;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

static char	*ft_convert_to_string(int n, unsigned int length)
{
	char			*string;
	unsigned int	number;

	string = (char *)malloc(sizeof(char) * (length + 1));
	if (!string)
		return (NULL);
	string[length] = '\0';
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	while (number > 0)
	{
		string[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	length;

	if (n == 0)
	{
		string = (char *)malloc(sizeof(char) * 2);
		if (!string)
			return (NULL);
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	length = ft_number_size(n);
	string = ft_convert_to_string(n, length);
	return (string);
}
/*
int	main(void)
{
	char	*result;

	result = ft_itoa(-42);
	printf("ft_itoa: %s\n", result);
	free(result);
	return (0);
}
*/