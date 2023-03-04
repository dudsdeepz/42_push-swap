/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:58:03 by eduardo           #+#    #+#             */
/*   Updated: 2023/03/03 23:57:36 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	half_sorted(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) != 3)
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

int	neighbour(t_list **a, t_list **b)
{
	int		elem;
	int		hold;
	t_list	*aux_a;
	t_list	*aux_b;

	aux_a = (*a);
	aux_b = (*b);
	hold = aux_a->box - aux_b->box;
	elem = aux_a->box;
	while (hold < 0)
	{
		aux_a = aux_a->next;
		hold = aux_a->box - aux_b->box;
	}
	while (aux_a->next)
	{
		if (aux_a->box - aux_b->box < hold)
		{
			hold = aux_a->box - aux_b->box;
			elem = aux_a->box;
		}
		aux_a = aux_a->next;
	}

	return (elem);
}

void	sort_checker(t_list **a, t_list **b)
{
	if (!is_sorted(*a))
	{
		if (ft_lstsize(*a) <= 3)
			sort3(a);
		if (ft_lstsize(*a) == 4 || ft_lstsize(*a) == 5)
			sort5(a, b);
		if (ft_lstsize(*a) > 5)
			surtar(a, b);
	}
}
