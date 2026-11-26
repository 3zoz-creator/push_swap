/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 21:41:10 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 12:28:05 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_top(t_stack *stack)
{
	int		tmp;
	t_node	*tempo;

	tmp = stack->head->value;
	tempo = stack->head->next;
	stack->head->value = tempo->value;
	tempo->value = tmp;
}

void	sa(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	swap_top(a);
	write(1, "sa\n", 3);
	count_op(a, OP_SA);
}

void	sb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	swap_top(b);
	write(1, "sb\n", 3);
	count_op(b, OP_SB);
}

void	ss(t_stack *a, t_stack *b)
{
	if ((!a || a->size < 2) && (!b || b->size < 2))
		return ;
	if (a && a->size >= 2)
		swap_top(a);
	if (b && b->size >= 2)
		swap_top(b);
	write(1, "ss\n", 3);
	count_op(a, OP_SS);
}
