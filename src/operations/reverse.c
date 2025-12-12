/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:32:00 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 16:36:42 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void rr_silent(t_stack *s)
{
	t_page *last_page;
	t_page *pre;

	if (!(s) || !(s->page) || s->size < 2)
		return;
	last_page = s->page;
	pre = NULL;
	while (last_page->next != NULL)
	{
		pre = last_page;
		last_page = last_page->next;
	}
	pre->next = NULL;
	last_page->next = s->page;
	s->page = last_page;
}

void rra(t_stack *a)
{
	rr_silent(a);
	write(1, "rra\n", 4);
}

void rrb(t_stack *b)
{
	rr_silent(b);
	write(1, "rrb\n", 4);
}

void rrr(t_stack *a, t_stack *b)
{
	rr_silent(a);
	rr_silent(b);
	write(1, "rrr\n", 4);
}
