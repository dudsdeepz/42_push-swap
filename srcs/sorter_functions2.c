/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:57:38 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/25 16:08:40 by eduarodr         ###   ########.fr       */
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
	if (!)
	if (!*stack_src)
		return ;
	ft_lstadd_front(stack_dest, *(stack_src));
	*stack_src = cursor;

	ft_printf("pa\n");
}

void	rb(t_list *list)
{
	int		tmp;
	t_list	*aux;

	aux = list;
	tmp = list->box;
	while (aux->next)
	{
		aux->box = aux->next->box;
		aux = aux->next;
	}
	aux->box = tmp;
	ft_printf("rb\n");
}
