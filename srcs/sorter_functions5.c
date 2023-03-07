/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 11:36:02 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	bruh(t_list **stack_a, t_list **stack_b)
{

	t_list	*aux;

	aux = (*stack_b);
	while ((*stack_b)->next != NULL)
	{
		printf("total_cost: %i\n", total_cost(stack_a, stack_b, aux));
		printf("====\n");
		(*stack_b) = (*stack_b)->next;
	}
	return (0);
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
