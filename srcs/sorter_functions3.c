/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:10:49 by eduardo           #+#    #+#             */
/*   Updated: 2023/03/07 14:49:48 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **list)
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
	ft_printf("rrb\n");
}

int	get_pos(t_list *item, t_list *list)
{
	int	count;
	t_list *aux;

	aux = list;
	count = 0;
	while (item->box != aux->box)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}

int	is_sorted(t_list *list)
{
	if (list)
	{
		while ((list)->next)
		{
			if ((list)->next->box < (list)->box)
				return (0);
			list = list->next;
		}
		return (1);
	}
	return (0);
}

//int	move_cost_aux(int pos, t_list **stack_a, t_list **stack_b)
//{
//	int	move;

//	move = 0;
//	if (pos < ft_lstsize(*stack_b) / 2)
//	{
//		while (pos != get_pos((*stack_a)->box, *stack_a) - 1)
//		{
//			pos--;
//			move++;
//		}
//	}
//	else if (pos >= ft_lstsize(*stack_b) / 2)
//	{
//		while (pos != get_pos((*stack_a)->box, *stack_a) - 1)
//		{
//			pos--;
//			move++;
//		}
//		move -= ft_lstsize(*stack_b) + 2;
//		move *= -1;
//	}
//	return (move);
//}



