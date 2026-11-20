/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 18:29:29 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/19 18:29:37 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_front(t_stack *stack, t_node *new)
{
	if (!stack || !new)
		return ;
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		new->next = stack->head;
		stack->head = new;
	}
	stack->size++;
}

void	add_back(t_stack *stack, t_node *new)
{
	if (!stack || !new)
		return ;
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		stack->tail->next = new;
		stack->tail = new;
	}
	stack->size++;
}
