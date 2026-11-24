/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:03:15 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/23 19:43:01 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a);
	init_stack(&b);
	if (argc < 2)
		return (1);
	if (parse_args(&a, argc, argv) == 0)
	{
		free_stack(&a);
		free_stack(&b);
		write(2, "Error\n", 6);
		return (1);
	}
	//print_stack(&a, 'a');
	simple_sort(&a, &b);
	//print_stack(&a, 'a');
	free_stack(&a);
	free_stack(&b);
	return (0);
}
