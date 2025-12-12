/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 22:52:19 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 22:52:19 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_page *create_page(int value)
{
	t_page *new_page;

	new_page = malloc(sizeof(t_page));
	if (!(new_page))
		return (NULL);
	new_page->value = value;
	new_page->index = -1;
	new_page->next = NULL;
	return (new_page);
}

void add_bottom(t_stack *s, t_page *last)
{
	t_page *temp_page;

	if (!(s) || !(last))
		return;
	if (!(s->page))
	{
		s->page = last;
		s->size = 1;
		return;
	}
	temp_page = s->page;
	while (temp_page->next)
		temp_page = temp_page->next;
	temp_page->next = last;
	s->size++;
}

void free_stack(t_stack *s)
{
	t_page *temp_page;

	if (!(s))
		return;
	while (s->page)
	{
		temp_page = s->page->next;
		free(s->page);
		s->page = temp_page;
	}
	s->size = 0;
}
