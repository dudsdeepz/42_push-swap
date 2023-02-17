/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:58:03 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/17 15:06:13 by eduarodr         ###   ########.fr       */
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

int neighbour(t_list **a, t_list **b)
{
	int		elem;
	int		hold;
	t_list *last;

	last = lstlast(*a);
	hold = (*a)->box - (*b)->box;
	elem = (*a)->box;
	while ((*a))
	{
		if ((*b)->box < ft_lstsize(*b) / 2)
			return (last->box);
		while (hold < 0)
		{
			(*a) = (*a)->next;
			hold = (*a)->box - (*b)->box;
			elem = (*a)->box;
		}
		if ((*a)->box - (*b)->box < hold)
		{
			hold = (*a)->box - (*b)->box;
			elem = (*a)->box;
		}
		(*a) = (*a)->next;
	}
	return (elem);
}

void	sort_checker(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 3)
		sort3(a);
	else if (ft_lstsize(*a) > 3 && ft_lstsize(*a) <= 5)
		sort5(a, b);
	else if (ft_lstsize(*a) > 5)
		surtar(a, b);
}
