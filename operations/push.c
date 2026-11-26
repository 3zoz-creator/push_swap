/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 20:09:54 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 10:46:17 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (!a || !b || !a->head)
		return ;
	tmp = remove_front(a);
	add_front(b, tmp);
	write(1, "pb\n", 3);
	count_op(a, OP_PB);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (!a || !b || !b->head)
		return ;
	tmp = remove_front(b);
	add_front(a, tmp);
	write(1, "pa\n", 3);
	count_op(a, OP_PA);
}
