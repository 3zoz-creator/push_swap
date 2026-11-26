/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:51:49 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 11:46:17 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_bench(t_stats *stats)
{
	static const char	*op_names[11] = {
		"sa", "sb", "ss", "pa", "pb",
		"ra", "rb", "rr", "rra", "rrb", "rrr"};
	int					i;

	ft_putstr_fd("Total operations: ", 2);
	ft_putnbr_fd(stats->total, 2);
	ft_putchar_fd('\n', 2);
	i = 0;
	while (i < 11)
	{
		ft_putstr_fd(op_names[i], 2);
		ft_putstr_fd(": ", 2);
		ft_putnbr_fd(stats->counts[i], 2);
		ft_putchar_fd('\n', 2);
		i++;
	}
}
