/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 18:32:47 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/19 22:24:10 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		i;
	t_stack	*stack_b;
	t_node	*new;
	t_node	*tmp;

	i = 1;
	stack = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	if (!stack || !stack_b)
		return (1);
	init_stack(stack);
	init_stack(stack_b);
	while (i < argc)
	{
		new = new_node(ft_atoi(argv[i]));
		if (!new)
			return (1);
		add_back(stack, new);
		i++;
	}
	printf("size of the stack = [%d]\n", stack->size);
	i = 0;
	tmp = stack->head;
	while (tmp != NULL)
	{
		printf("stack in index %d : [%d]\n", i, tmp->value);
		tmp = tmp->next;
		i++;
	}
	printf("head : %d\n", stack->head->value);
	printf("tail : %d\n", stack->tail->value);
	sa(stack);
	i = 0;
	tmp = stack->head;
	while (tmp != NULL)
	{
		printf("stack in index %d : [%d]\n", i, tmp->value);
		tmp = tmp->next;
		i++;
	}
	printf("head : %d\n", stack->head->value);
	printf("tail : %d\n", stack->tail->value);
	// pb(stack, stack_b);
	// printf("size of the stack = [%d]\n", stack->size);
	// printf("head : %d\n",stack->head->value);
	// printf("tail : %d\n", stack->tail->value);
	// printf("size of the stack_b = [%d]\n", stack_b->size);
	// printf("stack_b value = %d\n", stack_b->head->value);
	while ((stack->head) != NULL)
	{
		tmp = stack->head->next;
		free(stack->head);
		stack->head = tmp;
	}
}
