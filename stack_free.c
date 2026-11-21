/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 02:52:23 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/21 02:57:16 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_stack(t_stack *stack)
{
	t_node	*removed;

	if (!stack)
		return ;
	while (stack->head != NULL)
	{
		removed = remove_front(stack);
		free(removed);
	}
}
