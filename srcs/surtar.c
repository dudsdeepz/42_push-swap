/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/14 13:09:49 by eduarodr         ###   ########.fr       */
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
	half_sorted(stack_a, stack_b, 97);
	print_list (*stack_b);
	printf("======\n");
	print_list(*stack_a);
	printf("cost: %i\n", move_cost(stack_b, smallest(*stack_b)));
}

