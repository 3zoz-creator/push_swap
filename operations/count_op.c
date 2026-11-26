/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 10:34:21 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/26 13:16:19 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	count_op(t_stack *stack, int op)
{
	if (!stack || !stack->stats)
		return ;
	stack->stats->counts[op]++;
	stack->stats->total++;
}
