/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:12:33 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 12:26:45 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	init_stack(t_stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
	stack->stats = NULL;
}

void	init_stacks(t_stack *a, t_stack *b, t_stats *stats)
{
	int	i;

	init_stack(a);
	init_stack(b);
	stats->total = 0;
	i = 0;
	while (i < 11)
	{
		stats->counts[i] = 0;
		i++;
	}
	a->stats = stats;
	b->stats = stats;
}
