/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:11:53 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/24 22:17:56 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_array(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if ()
		}
		i++;
	}
}

static int *copy_and_sort(t_stack *a)
{
	t_node	*node;
	int		i;
	int		*arr;

	arr = malloc(a->size * sizeof(int));
	if (!arr)
		return (NULL);
	node = a->head;
	i = 0;
	while (node)
	{
		arr[i] = node->value;
		node = node->next;
		i++;
	}
	sort_array(arr, a->size);
	return (arr);
}

void	assign_ranks(t_stack *a)
{
	int *arr;

	if (!a || !a->head)
		return ;
	arr = copy_and_sort(a);
	if (!arr)
		return ;
}
