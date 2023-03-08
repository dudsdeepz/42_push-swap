/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:57:38 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/08 19:52:58 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *list)
{
	int	tmp;

	tmp = list->box;
	list->box = list->next->box;
	list->next->box = tmp;
	ft_printf("sa\n");
}

void	sb(t_list *list)
{
	int	tmp;

	tmp = list->box;
	list->box = list->next->box;
	list->next->box = tmp;
	ft_printf("sb\n");
}

void	pa(t_list **stack_src, t_list **stack_dest)
{
	t_list	*cursor;

	cursor = (*stack_src)->next;
	if (!*stack_src)
		return ;
	ft_lstadd_front(stack_dest, *(stack_src));
	*stack_src = cursor;
	ft_printf("pa\n");
}

void	rb(t_list **list)
{
	t_list	*tmp;
	t_list	*aux;

	tmp = (*list);
	(*list) = (*list)->next;
	aux = lstlast(*list);
	aux->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	pb(t_list **stack_src, t_list **stack_dest)
{
	t_list	*cursor;

	cursor = (*stack_src)->next;
	if (!*stack_src)
		return ;
	ft_lstadd_front(stack_dest, *(stack_src));
	*stack_src = cursor;
	ft_printf("pb\n");
}

