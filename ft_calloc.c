/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:17:51 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/06 12:53:47 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
implement using malloc()

calloc
- moltiplica n * size, per determinare il numero di byte da allocare
- passa questa dimensione a malloc per cercare nell'heap (memoria)
	un blocco di memoria contiguo
- se lo trova = alloca e imposta ogni byte a 0, ritorna puntatore
	al primo byte della memoria allocata
- se non lo trova = restituisce null

malloc
void *malloc( size_t size );
- richiede un blocco di memoria size_t size
- cerca spazio nello heap (nella memoria)
- se lo trova = restituisce puntatore a primo byte del blocco allocato
- se non lo strova = restituisce NULL

memset:
- imposta n byte di un'area di memoria a un valore specificato c.
- restituisce il puntatore ptr, 
	che rappresenta l'inizio dell'area di memoria modificata.

*/

// #include <stdio.h>
// #include <stdint.h> // SIZE_MAX
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
/*
void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
*/
void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr_mem;

	ptr_mem = malloc(n * size);
	if (ptr_mem == NULL)
		return (NULL);
	else
		ft_memset(ptr_mem, 0, n * size);
	return (ptr_mem);
}
/*
int	main(void)
{
	size_t	n;
	size_t	size;
	int	*array;

	n = 10;
	// n = SIZE_MAX; // (nil)
	size = sizeof(int);
	array = (int *)ft_calloc(n, size);
	if (array == NULL)
	{
		printf("%p\n", array);
		return (1);
	}
	printf("%p\n", array);
	
	free(array);
	return (0);
}
*/