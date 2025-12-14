/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 09:34:44 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/14 09:34:44 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_chunk_size(int size)
{
	int chunk;

	if (size <= 100)
		chunk = size / 7;
	else
		chunk = size / 15;
	if (chunk < 5)
		chunk = 5;
	return (chunk);
}

static void push_chunks(t_stack *a, t_stack *b)
{
	int chunk;
	int limit;

	chunk = get_chunk_size(a->size);
	limit = chunk;
	while (a->size > 0)
	{
		if (a->page->index < limit)
		{
			pb(a, b);
			if (b->page->index < limit - (chunk / 2))
				rb(b);
		}
		else
			ra(a);
		if (b->size == limit)
			limit += chunk;
	}
}

static void push_back_to_a(t_stack *a, t_stack *b)
{
	int max;
	int pos;

	while (b->size > 0)
	{
		max = get_max_index(b);
		pos = get_position(b, max);
		if (pos <= b->size / 2)
		{
			while (b->page->index != max)
				rb(b);
		}
		else
		{
			while (b->page->index != max)
				rrb(b);
		}
		pa(a, b);
	}
}

void turkish_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return;
	indexing(a);
	push_chunks(a, b);
	push_back_to_a(a, b);
}
