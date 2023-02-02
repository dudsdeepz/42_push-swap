/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:58:03 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/02 14:41:11 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallest_stack_b25(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) != 100)
	{
		if (get_pos(smallest(*stack_b), *stack_b) >= ((ft_lstsize(*stack_a) / 4) / 2 / 1))
		{
			while ((*stack_b)->box > smallest(*stack_b))
				rrb(stack_b);
			pa (stack_b, stack_a);
		}
		else if (get_pos(smallest(*stack_b), *stack_b) < ((ft_lstsize(*stack_a) / 4) / 2 / 1))
		{
			while ((*stack_b)->box > smallest(*stack_b))
				rb(*stack_b);
			pa (stack_b, stack_a);
		}
	}
}

void	smallest_stack_a25(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 100)
	{
		if (get_pos(smallest(*stack_a), *stack_a) >= ((ft_lstsize(*stack_a) / 2) / 1))
		{
			while ((*stack_a)->box > smallest(*stack_a))
				rra(stack_a);
			pb (stack_a, stack_b);
		}
		else if (get_pos(smallest(*stack_a), *stack_a) <= ((ft_lstsize(*stack_a) / 2)))
		{
			while ((*stack_a)->box > smallest(*stack_a))
				ra(*stack_a);
			pb (stack_a, stack_b);
		}
	}
}

void	smallest_stack_a50(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 100)
	{
		if (get_pos(smallest(*stack_a), *stack_a) >= ((ft_lstsize(*stack_a) / 2)))
		{
			while ((*stack_a)->box > smallest(*stack_a))
				rra(stack_a);
			pb (stack_a, stack_b);
		}
		else if (get_pos(smallest(*stack_a), *stack_a) < ((ft_lstsize(*stack_a) / 2) / 1))
		{
			while ((*stack_a)->box > smallest(*stack_a))
				ra(*stack_a);
			pb (stack_a, stack_b);
		}
	}
}

void	get_index(t_list **list)
{
	t_list	*tmp;
	t_list	*select;

	tmp = *list;
	while (tmp)
	{
		tmp->index = 0;
		select = *list;
		while (select)
		{
			if (tmp != select && tmp->box > select->box)
				tmp->index++;
			select = select->next;
		}
		tmp = tmp->next;
	}
}
