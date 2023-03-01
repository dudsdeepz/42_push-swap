/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/01 10:55:09 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	surtar(t_list **stack_a, t_list **stack_b)
{
	//t_list	*last_a;
	//t_list	*last_b;

	//last_a = lstlast(*stack_a);
	//last_b = lstlast(*stack_b);
	half_sorted(stack_a, stack_b);
	print_list(*stack_a);
	printf("===\n");
	print_list(*stack_b);
}

