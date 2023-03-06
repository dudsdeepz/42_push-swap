/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/05 14:33:00 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	surtar(t_list **a, t_list **b)
{
	t_list *aux_b;
	int 	move;
	
	half_sorted(a, b);
	aux_b = (*b);
	while ((*b) != NULL)
	{
		move = get_pos(bruh(a, b), aux_b);
		printf("best: %i\n", bruh(a, b));
		printf("best pos: %i\n", move);
		if (get_pos(bruh(a, b), aux_b) <= ft_lstsize(*b) / 2)
		{
			printf("best: %i\n", bruh(a, b));
			printf("best pos1: %i\n", move);
			while (move != 0)
			{
				rb(*b);
				move--;
			}
			pa(b, a);
		}
		else if (get_pos(bruh(a, b), aux_b) > ft_lstsize(*b) / 2)
		{
			printf("best: %i\n", bruh(a, b));
			while (move != 0)
			{
				rrb(b);
				move--;
			}
			pa(b, a);
		}
	}
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

	aux = (*a);
	cost_a = 0;
	cost_b = move_cost(&aux_b, (*b)->box);
	while (cost_a != get_pos(neighbour(&aux, &aux_b), *a))
			cost_a++;
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
