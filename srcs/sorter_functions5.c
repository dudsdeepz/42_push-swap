/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 15:52:26 by eduarodr         ###   ########.fr       */
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
	cost_aux = INT_MAX;
	while (aux)
	{
		cost = total_cost(stack_a, stack_b, aux);
		if (cost < cost_aux)
		{
			cost_aux = cost;
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
	int		b_move;
	int		neigh_pos;

	neighbourrr = neighbour(*a, *b);
	printf("neighbourrr: %i\n", neighbourrr->box);
	neigh_pos = get_pos(neighbourrr, *a);
	b_move = get_pos(n, *b);
	while (neigh_pos != 0)
	{
		if (neigh_pos >= ft_lstsize(*a) / 2)
		{
			rra(a);
			neigh_pos--;
		}
		else
		{
			ra(*a);
			neigh_pos--;
		}
	}
	while (b_move != 0)
	{
		if (b_move >= ft_lstsize(*b) / 2)
		{
			rrb(b);
			b_move--;
		}
		else
		{
			rb(*b);
			b_move--;
		}
	}
}
