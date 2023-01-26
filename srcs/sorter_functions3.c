/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:10:49 by eduardo           #+#    #+#             */
/*   Updated: 2023/01/26 19:15:03 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **list)
{
	t_list	*tmp;
	t_list	*aux;

	aux = lstlast(*list);
	tmp = (*list);
	aux->next = (*list);
	while (tmp->next != aux)
		tmp = tmp->next;
	(*list) = aux;
	tmp->next = NULL;
	ft_printf("rrb\n");
}

int	get_pos(int item, t_list *list)
{
	int	count;

	count = 0;
	while (list->box != item)
	{
		count++;
		list = list->next;
	}
	count++;
	return (count);
}
