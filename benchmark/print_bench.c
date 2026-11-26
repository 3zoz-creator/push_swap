/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:51:49 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 20:09:53 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_stats(t_stats *stats)
{
	static const char	*op_names[11] = {
		"sa", "sb", "ss", "pa", "pb",
		"ra", "rb", "rr", "rra", "rrb", "rrr"};
	int	i;

	i = 0;
	ft_putstr_fd("Total operations: ", 2);
	ft_putnbr_fd(stats->total, 2);
	ft_putchar_fd('\n', 2);
	while (i < 11)
	{
		ft_putstr_fd(op_names[i], 2);
		ft_putstr_fd(": ", 2);
		ft_putnbr_fd(stats->counts[i], 2);
		ft_putchar_fd('\n', 2);
		i++;
	}
}

static void	print_disorder(double disorder)
{
	int					percent;

	percent = (int)(disorder * 10000 + 0.5);
	ft_putstr_fd("Disorder: ", 2);
	ft_putnbr_fd(percent / 100, 2);
	ft_putchar_fd('.', 2);
	if ((percent % 100) < 10)
		ft_putchar_fd('0', 2);
	ft_putnbr_fd(percent % 100, 2);
	ft_putstr_fd("%\n", 2);
}

static int	find_algo(char *algo, char *strategy)
{
	int	i;

	i = 0;
	while (algo[i] && strategy[i])
	{
		if (strategy[i] != algo[i])
			return (0);
		i++;
	}
	return (algo[i] == '\0' && strategy[i] == '\0');
}

static void	ft_print_complexity(char *strategy)
{
	ft_putstr_fd("Strategy: ", 2);
	ft_putstr_fd(strategy, 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("Complexity: ", 2);
	if (find_algo("simple", strategy))
		ft_putstr_fd("O(n^2)\n", 2);
	else if (find_algo("medium", strategy))
		ft_putstr_fd("O(n sqrt(n))\n", 2);
	else if (find_algo("complex", strategy))
		ft_putstr_fd("O(n log n)\n", 2);
}

void	print_bench(t_stats *stats, double disorder, char *strategy)
{
	if (!stats || !strategy)
		return ;
	print_disorder(disorder);
	ft_print_complexity(strategy);
	print_stats(stats);
}
