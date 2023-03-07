/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 11:23:26 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	bruh(t_list **stack_a, t_list **stack_b)
{

	t_list	*aux;
	int hold_cost;
	int hold_best;
	t_list *aux2;

	aux = (*stack_b);
	aux2 = (*stack_b);
	hold_best = (*stack_b)->box;
	hold_cost = total_cost(stack_a, stack_b, aux);
	while (aux2->next != NULL)
	{
		printf("total_cost: %i\n", hold_cost);
		aux2 = aux2->next;
	}
	return (hold_best);
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
