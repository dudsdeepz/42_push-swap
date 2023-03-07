/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 11:14:36 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	surtar(t_list **a, t_list **b)
{
	//t_list 		*aux_b;
	//int 		move;

	half_sorted(a, b);
	bruh(a, b);
	//while ((*b) != NULL)
	//{
	//	aux_b = (*b);
	//	move = get_pos(bruh(a, b), aux_b);
	//	printf("bruh: %i\n", bruh(a, b));
	//	if (move <= ft_lstsize(*b) / 2)
	//	{
	//		while (move > 0)
	//		{
	//			rb(*b);
	//			move--;
	//		}
	//		pa(b, a);
	//	}
	//	else if (move > ft_lstsize(*b) / 2)
	//	{
	//		while (move > 0)
	//		{
	//			rrb(b);
	//			move--;
	//		}
	//		pa(b, a);
	//	}
	//}
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
	int		aux;

	aux = neighbour(*a, aux_b);
	printf("num b: %i\n", (*b)->box);
	printf("neighbour: %i\n", neighbour(*a, aux_b));
	cost_a = move_cost(a, aux);
	cost_b = move_cost(&aux_b, aux_b->box);
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
