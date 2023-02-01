/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:10:49 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/01 13:36:54 by eduardo          ###   ########.fr       */
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

void	biggest_stack_a25(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 100)
	{
		if (get_pos(biggest(*stack_a), *stack_a) >= 15)
		{
			while ((*stack_a)->box < biggest(*stack_a))
				rra(stack_a);
			pb (stack_a, stack_b);
		}
		else if (get_pos(biggest(*stack_a), *stack_a) < 15)
		{
			while ((*stack_a)->box < biggest(*stack_a))
				ra(*stack_a);
			pb (stack_a, stack_b);
		}
	}
}

void	biggest_stack_b25(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) != 100)
	{
		if (get_pos(biggest(*stack_b), *stack_b) >= 15)
		{
			while ((*stack_b)->box < biggest(*stack_b))
				rrb(stack_b);
			pa (stack_b, stack_a);
		}
		else if (get_pos(biggest(*stack_b), *stack_b) < 15)
		{
			while ((*stack_b)->box < biggest(*stack_b))
				rb(*stack_b);
			pa (stack_b, stack_a);
		}
	}
}

void	smallest_stack_b50(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) != 100)
	{
		if (get_pos(smallest(*stack_b), *stack_b) >= 25)
		{
			while ((*stack_b)->box > smallest(*stack_b))
				rrb(stack_b);
			pa (stack_b, stack_a);
		}
		else if (get_pos(smallest(*stack_b), *stack_b) < 25)
		{
			while ((*stack_b)->box > smallest(*stack_b))
				rb(*stack_b);
			pa (stack_b, stack_a);
		}
	}
}

void	sort25plsA(t_list **stack_a, t_list **stack_b)
{
	if (((*stack_a)->box < (*stack_a)->next->box))
		pb (stack_a, stack_b);
	sa(*stack_a);
}