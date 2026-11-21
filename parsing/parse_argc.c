/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 02:35:49 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/21 02:51:50 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_args(t_stack *a, int argc, char **argv)
{
	int	i;
	int	nbr;
	t_node	*n_node;

	i = 1;
	while (i < argc)
	{
		if (is_valid_int(argv[i]) == 0)
			return (0);
		nbr = ft_atoi(argv[i]);
		if (has_duplicate(a, nbr) == 1)
			return (0);
		n_node = new_node(nbr);
		if (!n_node)
			return (0);
		add_back(a, n_node);
		i++;
	}
	return (1);
}
