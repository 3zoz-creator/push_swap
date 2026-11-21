/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:12:28 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/20 18:35:54 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*find_before_last(t_node *lst)
{
	t_node	*node;

	node = lst->next;
	while (node->next != NULL)
	{
		node = node->next;
		lst = lst->next;
	}
	return (lst);
}

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

t_node	*remove_back(t_stack *stack)
{
	t_node	*remove;

	if (!stack || !stack->head)
		return (NULL);
	if (stack->size == 1)
	{
		remove = stack->tail;
		remove->next = NULL;
		init_stack(stack);
		return (remove);
	}
	remove = stack->tail;
	stack->tail = find_before_last(stack->head);
	stack->tail->next = NULL;
	stack->size--;
	return (remove);
}
