/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:12:28 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/20 15:51:40 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*remove_front(t_stack *stack)
{
	t_node	*removed;

	if (!stack || !stack->head)
		return (NULL);
	if (stack->size == 1)
	{
		removed = stack->head;
		removed->next = NULL;
		init_stack(stack);
		return (removed);
	}
	removed = stack->head;
	stack->head = stack->head->next;
	removed->next = NULL;
	stack->size--;
	return (removed);
}

t_node *remove
