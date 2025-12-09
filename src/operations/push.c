/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:32:04 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 11:32:04 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "operations.h"

void	pa(t_stack *a, t_stack *b)
{
	t_page	*temp_page;

	if (b->size == 0)
		return ;
	temp_page = b->page;
	b->page = b->page->next;
	b->size--;
	temp_page->next = a->page;
	a->page = temp_page;
	a->size++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	t_page	*temp_page;

	if (a -> size == 0)
		return ;
	temp_page = a->page;
	a->page = a->page->next;
	a->size--;
	temp_page->next = b->page;
	b->page = temp_page;
	b->size++;
	write(1, "pb\n", 3);
}
