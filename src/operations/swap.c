/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:28:23 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 11:28:23 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void swap_silent(t_stack *s)
{
	if (s->size < 2)
		return;
	int temp_value;
	int temp_index;

	// keeping temp with values and index
	temp_value = s->page->value;
	temp_index = s->page->index;
	// changing first 2 values
	s->page->value = s->page->next->value;
	s->page->index = s->page->next->index;
	// changing the remaining values
	s->page->next->value = temp_value;
	s->page->next->index = temp_index;
}

void sa(t_stack *a)
{
	swap_silent(a);
	write(1, "sa\n", 3);
}

void sb(t_stack *b)
{
	swap_silent(b);
	write(1, "sb\n", 3);
}

void ss(t_stack *a, t_stack *b)
{
	swap_silent(a);
	swap_silent(b);
	write(1, "ss\n", 3);
}
