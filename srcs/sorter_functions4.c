/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:58:03 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/14 12:50:55 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

long int	soma(t_list	*stack)
{
	long int	hold;

	hold = 0;
	while (stack)
	{
		hold += stack->box;
		stack = stack->next;
	}
	return (hold);
}

int	media(t_list *stack)
{
	return (soma(stack) / ft_lstsize(stack));
}

void	half_sorted(t_list **stack_a, t_list **stack_b, int size)
{
	while (ft_lstsize(*stack_b) != size)
	{
		if ((*stack_a)->box <= media(*stack_a))
		{
			pb (stack_a, stack_b);
			if (ft_lstsize(*stack_b) > 5)
			{
				if ((*stack_b)->box < media(*stack_b))
					rb(*stack_b);
			}
		}
		else
			ra (*stack_a);
	}
	sort3(stack_a);
}

