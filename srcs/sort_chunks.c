/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/27 15:31:59 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_chunks(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 25)
		pb(stack_a, stack_b);
	ft_printf("=================\n");
	ft_printf("STACK_A\n");
	print_list(*stack_a);
	ft_printf("=================\n");
	ft_printf("STACK B\n");
	print_list(*stack_b);
}

