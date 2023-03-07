/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:04:42 by eduarodr          #+#    #+#             */
/*   Updated: 2023/03/07 22:46:13 by eduardo          ###   ########.fr       */
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

t_list	*smallest(t_list *list)
{
	t_list	*min;

	min = list;
	while (list != NULL)
	{
		if (min->box > list->box)
			min = list;
		list = list->next;
	}
	return (min);
}

t_list	*biggest(t_list *list)
{
	t_list	*max;

	max = list;
	while (list != NULL)
	{
		if (max->box < list->box)
			max->box = list->box;
		list = list->next;
	}
	return (max);
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


