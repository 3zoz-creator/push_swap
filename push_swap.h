/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:12:46 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/24 22:41:39 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				rank;
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
int					has_duplicate(t_stack *stack, int value);
char				**ft_split(char const *s, char c);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				simple_sort(t_stack *a, t_stack *b);
int					is_sorted(t_stack *a);
void				free_stack(t_stack *stack);
void				ft_sort_int_tab(int *tab, int size);
int					get_rank(int value, int *arr, int size);

// remove before push
void				print_stack(t_stack *stack, char which_stack);

#endif
