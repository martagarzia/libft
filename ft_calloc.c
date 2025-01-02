/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:17:51 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/02 13:41:00 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, count * size);
	return (ptr);
}
/*
int main(void)
{
    size_t  count = 5;
    size_t  size = sizeof(int);
    int     *arr;
    size_t  i;

    arr = (int *)ft_calloc(count, size);
    if (!arr)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Allocated array (should be all zeros):\n");
    for (i = 0; i < count; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);

    free(arr);

    return (0);
}
*/
