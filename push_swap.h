/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:12:46 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/21 02:53:07 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	t_node			*tail;
	int				size;
}					t_stack;

void				add_back(t_stack *stack, t_node *new);
void				add_front(t_stack *stack, t_node *new);
t_node				*remove_front(t_stack *stack);
t_node				*remove_back(t_stack *stack);
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);
void				init_stack(t_stack *stack);
t_node				*new_node(int value);
int					is_valid_int(const char *str);
int					ft_atoi(const char *nptr);
int					parse_args(t_stack *a, int argc, char **argv);
void				free_stack(t_stack *stack);

#endif
