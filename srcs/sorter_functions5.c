/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/08 19:52:29 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*bruh(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	t_list	*best;
	int		cost;
	int		cost_aux;

	aux = (*stack_b);
	cost = INT_MAX;
	while (aux)
	{
		cost_aux = total_cost(stack_a, stack_b, aux);
		if (cost > cost_aux)
		{
			cost = cost_aux;
			best = aux;
		}
		aux = aux->next;
	}
	return (best);
}

int	many_spaces(char **av)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (av[i])
	{
		if (av[i][a] != ' ' && av[i][a + 1] != ' ')
			i++;
	}
	return (0);
}

int ft_strlen(char *c)
{
	int i;

	i = 0;
	if (ft_atoi(c) > INT_MAX || ft_atoi(c) < INT_MIN)
		exit (write(2, "Error\n", 6));
	while (c[i])
		i++;
	return (i);
}

void	push_neigh(t_list **a, t_list **b, t_list *elem)
{
	t_list	*aux;

	aux = neighbour(*a, bruh(a, b));
	while (aux != *a)
	{
		if (rrcost(aux) < rcost(*a, aux))
			rra(a);
		else
			ra(a);
	}
	while (elem != *b)
	{
		if (rrcost(elem) < rcost(*b, elem))
			rrb(b);
		else
			rb(b);
	}
}

int	rcost(t_list *stack, t_list *n)
{
	return (ft_lstsize(stack) - ft_lstsize(n));
}

int rrcost(t_list *n)
{
	return (ft_lstsize(n));
}
