/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:08:21 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/01 11:57:11 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				box;
	struct s_list	*next;
}			t_list;

t_list		*create_number(int box);
t_list		*lstlast(t_list *head);
void		sa(t_list	*list);
void		ra(t_list	*list);
void		rra(t_list **list);
void		rrb(t_list **list);
void		sort3(t_list **list);
int			ft_atoi(const char *nptr);
void		rr(t_list *stack_a, t_list *stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);
void		print_list(t_list *head);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_printf(const char *format, ...);
void		sort5(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_src, t_list **stack_dest);
void		sb(t_list *list);
void		rb(t_list *list);
void		pb(t_list **stack_src, t_list **stack_dest);
int			smallest(t_list *list);
int			ft_lstsize(t_list *lst);
int			get_pos(int pos, t_list *list);
void		surtar(t_list **stack_a, t_list **stack_b);
int			biggest(t_list *list);
int			is_sorted(t_list **list);
int			media(t_list *stack);
long int	soma(t_list	*stack);
void		half_sorted(t_list **stack_a, t_list **stack_b);
int 		move_cost(t_list **stack, int n);
int			move_cost_aux(int pos, t_list **stack_a, t_list **stack_b);
int			smallest_move_cost(t_list **stack_a, t_list **stack_b);
int			total_cost(t_list **a, t_list **stack_b);
int			neighbour(t_list **a, t_list **b);
//int		test(t_list **stack_a, t_list **stack_b);
void		sort_checker(t_list **a, t_list **b);
int			parsing(char **list);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
#endif
