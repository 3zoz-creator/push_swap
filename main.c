/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:03:15 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 20:24:18 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_stats	stats;
	double	disorder;

	init_stacks(&a, &b, &stats);
	if (argc < 2)
		return (0);
	if (parse_args(&a, argc, argv) == 0)
	{
		free_stack(&a);
		free_stack(&b);
		write(2, "Error\n", 6);
		return (1);
	}
	disorder = compute_disorder(&a);
	radix_sort(&a, &b);
	print_bench(&stats, disorder, "complex");
	free_stack(&a);
	free_stack(&b);
	return (0);
}
