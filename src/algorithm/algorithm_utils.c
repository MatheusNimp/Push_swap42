/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 10:33:00 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/12 10:33:00 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *s)
{
	t_page *current_page;

	if (!(s) || s->size < 2)
		return (1);

	current_page = s->page;
	while (current_page->next)
	{
		if (current_page->value > current_page->next->value)
			return (0);
		current_page = current_page->next;
	}
	return (1);
}

int get_min_index(t_stack *s)
{
	int min;
	t_page *curent_page;

	curent_page = s->page;
	min = curent_page->index;
	while (curent_page)
	{
		if (curent_page->index < min)
			min = curent_page->index;
		curent_page = curent_page->next;
	}
	return (min);
}

int get_max_index(t_stack *s)
{
	int max;
	t_page *curent_page;

	curent_page = s->page;
	max = curent_page->index;
	while (curent_page)
	{
		if (curent_page->index > max)
			max = curent_page->index;
		curent_page = curent_page->next;
	}
	return (max);
}

int get_position(t_stack *s, int index)
{
	int pos;
	t_page *curent_page;

	pos = 0;
	curent_page = s->page;
	while (curent_page)
	{
		if (curent_page->index == index)
			return (pos);
		curent_page = curent_page->next;
		pos++;
	}
	return (-1);
}
