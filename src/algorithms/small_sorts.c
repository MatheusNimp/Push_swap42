/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 23:18:15 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/12 23:18:15 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sort_two(t_stack *s)
{
	if (s->page->value > s->page->next->value)
		sa(s);
}

static void sort_three(t_stack *s)
{
	int x = s->page->value;
	int y = s->page->next->value;
	int z = s->page->next->next->value;

	if (x > y && y < z && x < z)
		sa(s);
	else if (x > y && y > z)
	{
		sa(s);
		rra(s);
	}
	else if (x > z && y < z)
		ra(s);
	else if (x < z && y > z)
	{
		sa(s);
		ra(s);
	}
	else if (x < y && y > z && x > z)
		rra(s);
}

static void sort_four(t_stack *a, t_stack *b)
{
	int min = get_min_index(a);
	int pos = get_position(a, min);

	if (pos == 1)
		ra(a);
	else if (pos == 2)
	{
		ra(a);
		ra(a);
	}
	else if (pos == 3)
		rra(a);

	pb(a, b);
	sort_three(a);
	pa(a, b);
}

static void sort_five(t_stack *a, t_stack *b)
{
	int min;
	int pos;
	min = get_min_index(a);
	pos = get_position(a, min);
	while (pos--)
		ra(a);
	pb(a, b);
	min = get_min_index(a);
	pos = get_position(a, min);
	while (pos--)
		ra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

void small_sorts(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return;
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 5)
		sort_five(a, b);
}
