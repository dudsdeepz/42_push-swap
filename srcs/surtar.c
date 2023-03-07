/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 23:48:06 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	surtar(t_list **a, t_list **b)
{
	half_sorted(a, b);
	sort3(a);
	while (ft_lstsize(*b))
	{
		if (get_pos(biggest(*b), *b) >= ft_lstsize(*b) /2)
		{
			while (biggest(*b)->box > (*b)->box)
				rrb(b);
		}
		if (get_pos(biggest(*b), *b) < ft_lstsize(*b) /2)
		{
			while (biggest(*b)->box > (*b)->box)
				rb(*b);
		}
		pa(b, a);
	}
	// while (smallest(*a)->box < (*a)->box)
	// 	ra(*a);
}

int	parsing(char **list, int ac)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (!list)
		return (0);
	while (list[++i])
	{
		if (ft_strlen(list[i]) > 11)
			exit (write(2, "Error\n", 6));
		if (!check_doubles(ac, list))
			exit(write(2, "Error\n", 6));
		if (ft_ischar(list[i][a]) == 1)
			exit (write(2, "Error\n", 6));
	}
	return (1);
}



int	check_doubles(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	total_cost(t_list **a, t_list **b, t_list *aux_b)
{
	int		cost_b;
	int		cost_a;
	t_list	*aux;

	aux = neighbour(*a, aux_b);
	if (rr_cost(*b, aux_b) < r_cost(*b, aux_b))
		cost_b = rr_cost(*b, aux_b);
	else
		cost_b = r_cost(*b, aux_b);
	if (rr_cost(*a, aux) < r_cost(*a, aux))
		cost_a = rr_cost(*a, aux);
	else
		cost_a = r_cost(*a, aux);
	return (cost_b + cost_a);
}

void	create_list(t_list **list, int ac, char **av)
{
	int	i;

	i = 0;

	while (++i < ac)
		ft_lstadd_back(list, ft_lstnew(ft_atoi(av[i])));
}

int is_num(char *c)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (c[i] == '-' || c[i] == '+')
		while (c[j] && (c[j] <= '9' && c[j] >= '0'))
			j++;
	else
		return (0);
	return (1);
}
