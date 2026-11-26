/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:11:53 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 09:53:41 by abait-br         ###   ########.fr       */
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

static void	assign_ranks(t_stack *a)
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

void	radix_sort(t_stack *a, t_stack *b)
{
	int size, (bits), (i), (j);
	if (!a || !b || !a->head || is_sorted(a))
		return ;
	i = 0;
	size = a->size;
	bits = count_bits(a->size);
	assign_ranks(a);
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			if (((a->head->rank >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (b->head)
			pa(a, b);
		i++;
	}
}
