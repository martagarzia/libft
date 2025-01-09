/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:29:37 by mgarzia           #+#    #+#             */
/*   Updated: 2025/01/09 17:38:18 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lstsize
conta quanti nodi ci sono in una lista,
	a partire dal primo nodo (lst).

ritorna:
- se lista non è vuota = umero int di nodi nella lista.
- se lista è vuota (lst == NULL) = restituisce 0.
*/

// #include <stdio.h> // printf
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = (void *)1;
	node2->content = (void *)2;
	node3->content = (void *)3;

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	int result;
	result = ft_lstsize(head);
	printf("%d\n", (result));
	
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/