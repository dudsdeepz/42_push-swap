/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:46:28 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/20 11:48:21 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int total_cost(t_list **a, t_list **b)
{
	int		cost_b;
	int		cost_a;

	cost_a = 0;
	cost_b = move_cost(b, (*b)->box);
	while (get_pos(neighbour(a, b), *a) != cost_a)
		cost_a++;
	return (cost_a + cost_b);
}

void do_it(t_list **stack_b, t_list **stack_a)
{
    
}