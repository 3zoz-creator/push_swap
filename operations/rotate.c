/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 23:17:17 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 12:28:50 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_top(t_stack *stack)
{
	t_node	*to_move_it;

	if (!stack || stack->size < 2)
		return ;
	to_move_it = remove_front(stack);
	add_back(stack, to_move_it);
}

void	ra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	rotate_top(a);
	write(1, "ra\n", 3);
	count_op(a, OP_RA);
}

void	rb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	rotate_top(b);
	write(1, "rb\n", 3);
	count_op(b, OP_RB);
}

void	rr(t_stack *a, t_stack *b)
{
	if ((!a || a->size < 2) && (!b || b->size < 2))
		return ;
	if (a && a->size >= 2)
		rotate_top(a);
	if (b && b->size >= 2)
		rotate_top(b);
	write(1, "rr\n", 3);
	count_op(a, OP_RR);
}
