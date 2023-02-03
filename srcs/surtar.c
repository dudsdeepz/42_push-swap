/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/03 08:22:32 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_chunks(t_list **stack_a, t_list **stack_b)
{
	//t_list	*last_a;
	//t_list	*last_b;

	//last_a = lstlast(*stack_a);
	//last_b = lstlast(*stack_b);
	get_index(stack_a);
	while (ft_lstsize(*stack_b) != 19)
	{
		while ((*stack_a)->next)
		{
			while (!chunk_check(stack_a, 0, 19))
				(*stack_a) = (*stack_a)->next;
			if (get_pos((*stack_a)->box, *stack_a) >= 50 )
				while ((*stack_a)->box )
		}
	}
}
