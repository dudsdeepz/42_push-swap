/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 23:34:24 by eduardo          ###   ########.fr       */
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
		if (cost_aux < cost)
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

void	both_top(t_list **a, t_list **b, t_list *n)
{
	t_list	*neighbourrr;

	neighbourrr = neighbour(*a, n);
	printf("neighbour %i\n", neighbourrr->box);
	printf("num b: %i\n", n->box);
	while (get_pos(neighbourrr, *a) != 0)
	{
		get_pos(neighbourrr, *a);
		if (rr_cost(*a, neighbourrr) < r_cost(*a, neighbourrr))
			rra(a);
		else
			ra(*a);
	}
	while (get_pos(n, *b) != 0)
	{
		get_pos(n, *b);
		if (rr_cost(*b, n) < r_cost(*b, n))
			rrb(b);
		else
			rb(*b);
	}
}

int r_cost(t_list *list, t_list *n)
{
	return (ft_lstsize(list) - ft_lstsize(n));
}

int rr_cost(t_list *list, t_list *n)
{
	(void)list;
	return (ft_lstsize(n));
}