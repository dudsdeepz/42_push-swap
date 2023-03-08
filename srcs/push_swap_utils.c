/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:07:28 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/08 14:14:58 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int box)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->box = box;
	new->next = NULL;
	return (new);
}

t_list	*lstlast(t_list *list)
{
	if (!list)
		return (0);
	while (list->next)
		list = list->next;
	return (list);
}

void	print_list(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
	{
		ft_printf("%i  |\n", tmp->box);
		tmp = tmp->next;
	}
}

long	ft_atoi(const char *nptr)
{
	size_t		i;
	long int	result;
	long int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
		if (nptr[i] == 0)
			exit (write(2, "Error\n", 6));
	}
	while (nptr[i])
	{
		if (!(nptr[i] >= '0' && nptr[i] <= '9'))
			exit(write(2, "Error\n", 6));
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

int	move_cost(t_list *stack, t_list *n)
{
	int	move;

	move = get_pos(n, stack);
	if (move < ft_lstsize(stack) / 2)
		return (move);
	else if (move >= ft_lstsize(stack) / 2)
		return (ft_lstsize(stack) - move);
	return (0);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = lstlast(*lst);
	ptr->next = new;
}
