/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/05 14:33:41 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int 		bruh(t_list **stack_a, t_list **stack_b)
{
	
	t_list	*aux;
	int hold_cost;
	int second_cost;
	int hold_best;
	t_list *aux2;
	t_list *aux3;

	aux3 = (*stack_b);
	aux = (*stack_b);
	aux2 = (*stack_b);
	hold_best = (*stack_b)->box;
	hold_cost = total_cost(stack_a, stack_b, aux);
	while (aux2->next != NULL)
	{
		second_cost = total_cost(stack_a, stack_b, aux);
		if (hold_cost > second_cost)
		{
			hold_cost = second_cost;
			hold_best = aux3->box;
		}
		aux3 = aux3->next;
		aux2 = aux2->next;
	}
	printf("hold_best: %i\n", hold_best);
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
