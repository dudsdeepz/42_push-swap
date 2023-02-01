/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/01 13:40:36 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_chunks(t_list **stack_a, t_list **stack_b)
{
	// t_list	*last_a;

	// last_a = lstlast(*stack_a);
	while (ft_lstsize(*stack_b) != 25)
		pb (stack_a, stack_b);
	smallest_stack_b25(stack_a, stack_b);
}
