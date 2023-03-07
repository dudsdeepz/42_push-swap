/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter35.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:34:48 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 14:49:36 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort3(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = lstlast(*head);
	tmp = (*head);
	if (ft_lstsize(tmp) == 2 && tmp->box > tmp->next->box)
		sa(*head);
	else if (tmp->box < tmp->next->box && tmp->box > last->box)
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
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 2)
	{
		if (get_pos(smallest(*stack_a), *stack_a) >= 4)
		{
			while ((*stack_a)->box > smallest(*stack_a)->box)
				rra(stack_a);
			pb(stack_a, stack_b);
		}
		else if (get_pos(smallest(*stack_a), *stack_a) < 4)
		{
			while ((*stack_a)->box > smallest(*stack_a)->box)
				ra(*stack_a);
			pb(stack_a, stack_b);
		}
	}
	sort3(stack_a);
	while (*stack_b)
		pa(stack_b, stack_a);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*ptr;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		free(*lst);
		*lst = ptr;
	}
	free(ptr);
}

int ft_ischar(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
