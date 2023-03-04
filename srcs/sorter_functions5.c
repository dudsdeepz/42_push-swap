/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/04 00:19:38 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int 		bruh(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	int first_cost;
	int second_cost;
	int hold_cost;

	hold_cost = 0;
	aux = (*stack_b);
	// first_cost = total_cost(stack_a, stack_b, aux);
	// (*stack_b) = (*stack_b)->next;
	// second_cost = total_cost(stack_a, stack_b, aux);
	hold_cost = (*stack_b)->box;
	while ((*stack_b)->next != NULL)
	{
		first_cost = total_cost(stack_a, stack_b, aux);
		(*stack_b) = (*stack_b)->next;
		second_cost = total_cost(stack_a, stack_b, aux);
		if (first_cost > second_cost)
			hold_cost = (*stack_b)->box;
		(*stack_b) = (*stack_b)->next;
	}
	return (hold_cost);
}

char	**recursive(char **split, int count, char c, char const *s)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	while (s && *s && *s == c)
		s++;
	while (*s && s[i] && s[i] != c)
		i++;
	if (i > 0)
		str = malloc(sizeof(char) * i + 1);
	if (str)
		str[i] = '\0';
	while (str && s && *s && *s != c)
		str[i++] = *s++;
	if (str)
		split = recursive(split, count + 1, c, s);
	else
		split = malloc(sizeof(char *) * (count + 1));
	if (split)
		split[count] = str;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	return (recursive(NULL, 0, c, s));
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
