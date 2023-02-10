/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/10 16:01:18 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_chunks(t_list **stack_a, t_list **stack_b)
{
	//t_list	*last_a;
	//t_list	*last_b;
	//t_list	*first;

	//first = (*stack_a);
	//last_a = lstlast(*stack_a);
	//last_b = lstlast(*stack_b);
	half_sorted(stack_a, stack_b, 50);
	half_sorted(stack_a, stack_b, 98);
	while (ft_lstsize(*stack_a) != 100)
	{
		if (get_pos(biggest(*stack_b), *stack_b) >= ft_lstsize(*stack_b) / 2)
		{
			while (biggest(*stack_b) > (*stack_b)->box)
				rrb(stack_b);
		}
		else
			while (biggest(*stack_b) > (*stack_b)->box)
				rb(*stack_b);
		pa(stack_b, stack_a);
	}
	//while (ft_lstsize(*stack_b) != 100)
	//	top_and_push(stack_a, stack_b);
}

