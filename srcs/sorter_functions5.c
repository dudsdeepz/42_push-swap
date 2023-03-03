/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:55:45 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/03 18:34:59 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void 		bruh(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;

	aux = (*stack_b);
    while (aux != NULL)
    {
        printf("num b: %i\n", aux->box);
		printf("total cost: %i\n", total_cost(stack_a, &aux));
        printf("======\n");
        aux = aux->next;
    }
    (*stack_a) = (*stack_a)->next;
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
	if (!is_num(c))
		exit (write(2, "Error\n", 6));
	if (ft_atoi(c) > INT_MAX || ft_atoi(c) < INT_MIN)
		exit (write(2, "Error\n", 6));
	while (c[i])
		i++;
	return (i);
}
