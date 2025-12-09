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

void pa(t_stack *a, t_stack *b)
{
	if (b->size == 0)
		return;
	t_page *temp_page;

	// removing the first page in b
	temp_page = b->page;
	b->page = b->page->next;
	b->size--;
	// adding the new first page to a
	temp_page->next = a->page;
	a->page = temp_page;
	a->size++;
	// writing
	write(1, "pa\n", 3);
}

void pb(t_stack *a, t_stack *b)
{
	t_page *temp_page;
	if (a->size == 0)
	{
		return;
	}
	// removing the first page in a
	temp_page = a->page;
	a->page = a->page->next;
	a->size--;
	// adding the new first page to b
	temp_page->next = b->page;
	b->page = temp_page;
	b->size++;
	// writing
	write(1, "pb\n", 3);
}
