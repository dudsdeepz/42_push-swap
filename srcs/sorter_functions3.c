/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_functions3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:10:49 by eduardo           #+#    #+#             */
/*   Updated: 2023/01/26 17:37:20 by eduardo          ###   ########.fr       */
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