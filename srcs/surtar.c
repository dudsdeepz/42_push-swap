/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surtar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:06 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/03 18:39:58 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	surtar(t_list **stack_a, t_list **stack_b)
{
	//t_list	*last_a;
	//t_list	*last_b;

	//last_a = lstlast(*stack_a);
	//last_b = lstlast(*stack_b);
	half_sorted(stack_a, stack_b);
	sb(*stack_b);
	print_list(*stack_a);
	printf("====\n");
	print_list(*stack_b);
	bruh(stack_a, stack_b);
}

int	parsing(char **list, int ac)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
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

int	total_cost(t_list **a, t_list **b)
{
	int		cost_b;
	int	cost_a;
	t_list	*aux;
	t_list	*aux_b;

	aux_b = (*b);
	aux = (*a);
	cost_a = get_pos(aux->box, aux);
	cost_b = move_cost(&aux_b, (*b)->box);
	while (cost_a != get_pos(neighbour(&aux, &aux_b), *a))
			cost_a++;
	printf("cost_a: %i\n", cost_a);
	printf("cost_b: %i\n", cost_b);
	printf("neighbour: %i\n", neighbour(&aux, &aux_b));
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
	return ((!c[i]));
}
