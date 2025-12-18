/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 10:02:27 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/15 16:09:58 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	indexing(t_stack *s)
{
	t_page	*current_page;
	t_page	*checker;
	int		counter;

	if (!s || !s->page)
		return ;
	current_page = s->page;
	while (current_page)
	{
		checker = s->page;
		counter = 0;
		while (checker)
		{
			if (current_page->value > checker->value)
				counter++;
			checker = checker->next;
		}
		current_page->index = counter;
		current_page = current_page->next;
	}
}