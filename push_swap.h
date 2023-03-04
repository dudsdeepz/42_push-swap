/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:08:21 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/04 00:13:20 by eduardo          ###   ########.fr       */
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

t_list		*ft_lstnew(int box);
t_list		*lstlast(t_list *head);
void		sa(t_list	*list);
void		ra(t_list	*list);
void		rra(t_list **list);
void		rrb(t_list **list);
void		sort3(t_list **list);
long		ft_atoi(const char *nptr);
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
int			is_sorted(t_list *list);
int			media(t_list *stack);
long int	soma(t_list	*stack);
void		half_sorted(t_list **stack_a, t_list **stack_b);
int 		move_cost(t_list **stack, int n);
int			move_cost_aux(int pos, t_list **stack_a, t_list **stack_b);
int			smallest_move_cost(t_list **stack_a, t_list **stack_b);
int			total_cost(t_list **a, t_list **stack_b, t_list *aux_b);
int			neighbour(t_list **a, t_list **b);
void 		create_list(t_list **list, int ac, char **av);
void		sort_checker(t_list **a, t_list **b);
int			parsing(char **list, int ac);
int			ft_ischar(int c);
int 		bruh(t_list **stack_a, t_list **stack_b);
int 		check_doubles(int ac, char **av);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst);
char		**ft_split(char const *s, char c);
char		**recursive(char **split, int count, char c, char const *s);
int 		ft_strlen(char *c);
int 		is_num(char *c);

#endif
