/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:31:48 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 11:31:48 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void rotate_silent(t_stack *s)
{
	if (!(s) || s->size < 2)
		return;
	t_page *last_page;
	t_page *first_page;

	first_page = s->page;
	s->page = s->page->next;
	last_page = s->page;
	while (last_page->next != NULL)
		last_page = last_page->next;
	last_page->next = first_page;
	first_page->next = NULL;
}
void ra(t_stack *a)
{
	rotate_silent(a);
	write(1, "ra\n", 3);
}

void rb(t_stack *b)
{
	rotate_silent(b);
	write(1, "rb\n", 3);
}

void rr(t_stack *a, t_stack *b)
{
	rotate_silent(a);
	rotate_silent(b);
	write(1, "rr\n", 3);
}
