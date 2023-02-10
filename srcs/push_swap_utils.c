/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:07:28 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/10 14:14:54 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*create_number(int box)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	n->box = box;
	n->next = NULL;
	return (n);
}

t_list	*lstlast(t_list *list)
{
	t_list	*tmp;

	if (!list)
		return (NULL);
	tmp = list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	print_list(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
	{
		ft_printf("%i  |\n", tmp->box);
		tmp = tmp->next;
	}
}

int	ft_atoi(const char *nptr)
{
	size_t		i;
	long int	result;
	long int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

int	best_move(t_list **stack_a, t_list **stack_b)
{
	if (move_cost(stack_a, stack_b) > smallest_move_cost(stack_a, stack_b))
		return (0);
	else
		return (1);
}

void	top_and_push(t_list **stack_a, t_list **stack_b)
{
	if (!best_move(stack_a, stack_b))
	{
		if (get_pos(smallest(*stack_b), *stack_b) >= ft_lstsize(*stack_b) / 2)
		{
			while (smallest(*stack_b) < (*stack_b)->box)
				rrb(stack_b);
		}
		else
			while (smallest(*stack_b) < (*stack_b)->box)
				rb(*stack_b);
		pa(stack_b, stack_a);
	}
	else if (best_move(stack_a, stack_b) == 1)
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
}
