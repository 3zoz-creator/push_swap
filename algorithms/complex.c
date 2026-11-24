/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:11:53 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/24 16:49:07 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int *copy_stack_values(t_stack *a)
{
	t_node	*node;
	int		i;
	int		*arr;

	arr = malloc(a->size * sizeof(int));
	if (!arr)
		return (NULL);
	node = a->head;
	i = 0;
	while (node)
	{
		arr[i] = node->value;
		node = node->next;
		i++;
	}
	return (arr);
}

void	assign_ranks(t_stack *a)
{
	int	*arr;

	if (!a || !a->head)
		return ;
	arr = copy_stack_values(a);
	

}
