/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:58:03 by eduardo           #+#    #+#             */
/*   Updated: 2023/02/03 07:59:09 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_index(t_list **list)
{
	t_list	*tmp;
	t_list	*select;

	tmp = *list;
	while (tmp)
	{
		tmp->index = 0;
		select = *list;
		while (select)
		{
			if (tmp != select && tmp->box > select->box)
				tmp->index++;
			select = select->next;
		}
		tmp = tmp->next;
	}
}

int	chunk_check(t_list	**list, int start, int end)
{
	t_list	*tmp;

	tmp = (*list);
	if (tmp->index >= start && tmp->index <= end)
		return (1);
	return (-1);
}
