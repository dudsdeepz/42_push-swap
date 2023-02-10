/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:10:49 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/08 18:38:32 by eduarodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **v)
{
	int		a;
	t_list	*head;
	t_list	*last;
	t_list	*tmp;
	t_list	*stack_b;

	stack_b = NULL;
	head = NULL;
	if (ac < 1)
		return (0);
	a = 1;
	while (v[a])
	{
		tmp = create_number(ft_atoi(v[a]));
		if (!head)
			head = tmp;
		else
			last->next = tmp;
		last = tmp;
		a++;
	}
	sort_chunks(&head, &stack_b);
}
