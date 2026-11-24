/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 21:23:13 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/22 21:28:14 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	print_stack(t_stack *stack, char which_stack)
{
	t_node *node;
	int		i;

	if (!stack || !stack->head)
		return ;
	node = stack->head;
	printf("size of stack %c = %d\n",which_stack, stack->size);
	i = 0;
	while (node)
	{
		printf("elem %i in stack %c : [%d]\n", i, which_stack, node->value);
		node = node->next;
		i++;
	}
}
