/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 22:51:16 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/22 21:33:33 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_position(t_stack *a)
{
	t_node	*node;

	int min, (index), (i);
	if (!a || !a->head)
		return (-1);
	node = a->head->next;
	min = a->head->value;
	index = 0;
	i = 1;
	while (node != NULL)
	{
		if (min > node->value)
		{
			min = node->value;
			index = i;
		}
		node = node->next;
		i++;
	}
	return (index);
}

static void	move_min_to_top(t_stack *a)
{
	int	min;
	int	moves_count;

	if (!a || !a->head)
		return ;
	min = find_min_position(a);
	if (min <= a->size / 2)
	{
		moves_count = min;
		while (moves_count-- > 0)
			ra(a);
	}
	else
	{
		moves_count = a->size - min;
		while (moves_count-- > 0)
			rra(a);
	}
}

void	simple_sort(t_stack *a, t_stack *b)
{
	if (!a || !b || !a->head || is_sorted(a))
		return ;
	while (a->head)
	{
		move_min_to_top(a);
		pb(a, b);
	}
	while (b->head)
		pa(a, b);
}
