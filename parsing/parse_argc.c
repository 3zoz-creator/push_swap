/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 02:35:49 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/21 17:46:18 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **splited)
{
	int	i;

	i = 0;
	while (splited[i] != NULL)
	{
		free(splited[i]);
		i++;
	}
}

static int	fill_argument(char **splited, t_stack *a)
{
	int	j;
	int nbr;
	t_node	*n_node;

	j = 0;
	while (splited[j] != NULL)
	{
		if (is_valid_int(splited[j]) == 0)
			return (0);
		nbr = ft_atoi(splited[j]);
		if (has_duplicate(a, nbr) == 1)
			return (0);
		n_node = new_node(nbr);
		if (!n_node)
			return (0);
		add_back(a, n_node);
		j++;
	}
	return (1);
}

int	parse_args(t_stack *a, int argc, char **argv)
{
	char	**splited;

	int i;
	i = 1;
	while (i < argc)
	{

		splited = ft_split(argv[i], ' ');
		if (!splited)
			free_split(splited);
		if (fill_argument(splited, a) == 0)
			return (0);
		i++;
	}
	return (1);
}
