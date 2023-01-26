/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:04:42 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/26 17:12:05 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst || *lst)
		new->next = *lst;
	*lst = new;
	new = new->next;
}

int	smallest(t_list *list)
{
	int	min;

	min = INT_MAX;
	while (list != NULL)
	{
		if (min > list->box)
			min = list->box;
		list = list->next;
	}
	return (min);
}

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	if (!lst)
		return (0);
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
