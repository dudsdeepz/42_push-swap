/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:04:42 by eduarodr          #+#    #+#             */
/*   Updated: 2023/01/25 14:40:11 by eduarodr         ###   ########.fr       */
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
