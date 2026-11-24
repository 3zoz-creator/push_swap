/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 19:58:56 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/22 20:10:02 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	t_node	*node;
	int		previous;

	if (!a || !a->head)
		return (0);
	previous = a->head->value;
	node = a->head->next;
	while (node)
	{
		if (previous > node->value)
			return (0);
		previous = node->value;
		node = node->next;
	}
	return (1);
}
