/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils.c                                 :+:      :+:    :+:   */
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
