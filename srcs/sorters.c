/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:34:48 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/25 15:51:50 by eduarodr         ###   ########.fr       */
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
		rra_rrb(head);
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

void	sort5(t_list **stack_a)
{
	t_list	*stack_b;
	t_list	*tmp;

	tmp = (*stack_a);
	pa(&tmp, &stack_b);
	ft_printf("==============\n");
	ft_printf("STACK A\n");
	print_list(tmp);
	ft_printf("==============\n");
	printf("STACK B\n");
	printf("%d\n", stack_b->box);
	ft_printf("==============\n");
	pa(&tmp, &stack_b);
	ft_printf("STACK A\n");
	print_list(tmp);
	ft_printf("==============\n");
	printf("STACK B\n");
	printf("%d\n", stack_b->box);
}
