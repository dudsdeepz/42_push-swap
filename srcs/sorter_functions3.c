/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:10:49 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/10 14:28:14 by eduarodr         ###   ########.fr       */
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

int	get_pos(int item, t_list *list)
{
	int	count;

	count = 0;
	while (list->box != item)
	{
		count++;
		list = list->next;
	}
	count++;
	return (count);
}

int	is_sorted(t_list **list)
{
	t_list	*tmp;

	tmp = (*list);
	while (tmp->next)
	{
		if (tmp->box > tmp->next->box)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	move_cost(t_list **stack_a, t_list **stack_b)
{
	int		pos;
	int		cost;

	pos = get_pos(biggest(*stack_b), *stack_b);
	cost = move_cost_aux(pos, stack_a, stack_b);
	return (cost);
}

int	move_cost_aux(int pos, t_list **stack_a, t_list **stack_b)
{
	int	move;

	move = 0;
	if (pos < ft_lstsize(*stack_b) / 2)
	{
		while (pos != get_pos((*stack_a)->box, *stack_a) - 1)
		{
			pos--;
			move++;
		}
	}
	else if (pos >= ft_lstsize(*stack_b) / 2)
	{
		while (pos != get_pos((*stack_a)->box, *stack_a) - 1)
		{
			pos--;
			move++;
		}
		move -= ft_lstsize(*stack_b) + 2;
		move *= -1;
	}
	return (move);
}
