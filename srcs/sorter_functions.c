/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:53:50 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/08 19:53:12 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	ra(&stack_a);
	rb(&stack_b);
	ft_printf("rr\n");
}

void	ra(t_list **list)
{
	t_list	*tmp;
	t_list	*aux;

	tmp = (*list);
	(*list) = (*list)->next;
	aux = lstlast(*list);
	aux->next = tmp;
	tmp->next = NULL;
	//aux = list;
	//tmp = list->box;
	//while (aux->next)
	//{
	//	aux->box = aux->next->box;
	//	aux = aux->next;
	//}
	//aux->box = tmp;
	ft_printf("ra\n");
}

void	rra(t_list **list)
{
	t_list	*tmp;
	t_list	*aux;

	aux = lstlast(*list);
	tmp = (*list);
	aux->next = (*list);
	while (tmp->next != aux)
		tmp = tmp->next;
	(*list) = aux;
	tmp->next = NULL;
	ft_printf("rra\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}
