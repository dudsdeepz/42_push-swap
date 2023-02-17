/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:07:28 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/17 15:25:30 by eduarodr         ###   ########.fr       */
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

int move_cost(t_list **stack, int n)
{
	int	move;

	move = 0;
	if (get_pos(n, *stack) < ft_lstsize(*stack) / 2)
	{
		while (move != get_pos(n, *stack))
			move++;
	}
	else if (get_pos(n, *stack) >= ft_lstsize(*stack) / 2)
	{
		while (get_pos(n, *stack) != move)
			move++;
		move -= ft_lstsize(*stack) + 1;
		move *= -1;
	}
	else if (!move)
		return (0);
	return (move);
}

int total_cost(t_list **a, t_list **b)
{
	int		cost_b;
	int		cost_a;
	int		n;

	n = neighbour(a, b);
	printf("num: %i\n", n);
	cost_b = move_cost(b, (*b)->box);
	printf("cost_b: %i\n", cost_b);
	cost_a = move_cost(a, neighbour(a, b));
	return (cost_a + cost_b + 1);
}
