/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:08:21 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/25 15:41:45 by eduarodr         ###   ########.fr       */
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

t_list	*create_number(int box);
t_list	*lstlast(t_list *head);
void	sa(t_list	*list);
void	ra(t_list	*list);
void	rra(t_list **list);
void	rrb(t_list **list);
void	sort3(t_list **list);
int		ft_atoi(const char *nptr);
void	rr(t_list *stack_a, t_list *stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	print_list(t_list *head);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_printf(const char *format, ...);
void	sort5(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_src, t_list **stack_dest);
void	sb(t_list *list);
void	rb(t_list *list);
void	pb(t_list **stack_src, t_list **stack_dest);
int		find_smallest(t_list **list);
int	ft_lstsize(t_list *lst);

#endif
