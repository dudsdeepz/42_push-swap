/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:34:48 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/25 16:32:28 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort3(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = lstlast(*head);
	tmp = (*head);
	if (tmp->box < tmp->next->box && tmp->box > last->box)
		rra(head);
	else if (last->box < tmp->box && last->box < tmp->next->box)
	{
		ra(*head);
		sa(*head);
	}
	else if (tmp->box > tmp->next->box && tmp->box > last->box)
		ra(*head);
	else if (tmp->box < last->box && tmp->box > tmp->next->box)
		sa(*head);
	else if (tmp->next->box > tmp->box && last->box < tmp->next->box)
	{
		sa(*head);
		ra(*head);
	}
	ft_printf("==============\n");
	print_list(*head);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	// t_list	*last_b;
	// t_list	*last_a;

	// last_b = lstlast(stack_b);
	// last_a = lstlast(*stack_a);
	ft_printf("==============\n");
	print_list(*stack_a);
	ft_printf("==============\n");
	print_list(*stack_b);
}
