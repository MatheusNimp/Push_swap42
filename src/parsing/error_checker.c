/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:54:50 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/15 16:05:57 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	has_duplicates(t_stack *s)
{
	t_page	*current;
	t_page	*checker;

	if (!s || !s->page)
		return (0);
	current = s->page;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->value == checker->value)
				return (1);
			checker = checker->next;
		}
		current = current->next;
	}
	return (0);
}

void	error_exit(t_stack *a, char **split)
{
	if (split)
		free_split(split);
	if (a)
		free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}