/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marta <marta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:10:48 by marta             #+#    #+#             */
/*   Updated: 2024/12/18 12:10:57 by marta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	print_upper(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c -= 32;
}
/*
int	main(void)
{
	char	str[] = "dolphins";

	ft_striteri(str, print_upper);
	printf("ft_striteri: %s\n", str);
	return (0);
}
*/