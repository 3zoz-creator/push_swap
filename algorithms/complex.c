/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:11:53 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/25 15:31:48 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_bits(int size)
{
	int	n;
	int	bits;

	n = size - 1;
	bits = 0;
	while (n > 0)
	{
		n = n >> 1;
		bits++;
	}
	return (bits);
}

static int	*copy_and_sort(t_stack *a)
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
	ft_sort_int_tab(arr, a->size);
	return (arr);
}

void	assign_ranks(t_stack *a)
{
	t_node	*node;
	int		*arr;

	if (!a || !a->head)
		return ;
	arr = copy_and_sort(a);
	if (!arr)
		return ;
	node = a->head;
	while (node)
	{
		node->rank = get_rank(node->value, arr, a->size);
		node = node->next;
	}
	free(arr);
}
