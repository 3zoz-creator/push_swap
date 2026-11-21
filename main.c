/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:03:15 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/21 03:13:26 by abait-br         ###   ########.fr       */
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
	free_stack(&a);
	free_stack(&b);
	return (0);
}
