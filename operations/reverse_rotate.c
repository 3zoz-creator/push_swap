/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:23:47 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 12:28:28 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	t_node	*tail;

	tail = remove_back(stack);
	add_front(stack, tail);
}

void	rra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	reverse_rotate(a);
	write(1, "rra\n", 4);
	count_op(a, OP_RRA);
}

void	rrb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	count_op(b, OP_RRB);
}

void	rrr(t_stack *a, t_stack *b)
{
	if ((!a || a->size < 2) && (!b || b->size < 2))
		return ;
	if (a && a->size >= 2)
		reverse_rotate(a);
	if (b && b->size >= 2)
		reverse_rotate(b);
	write(1, "rrr\n", 4);
	count_op(a, OP_RRR);
}
