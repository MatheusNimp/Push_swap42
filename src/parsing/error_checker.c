/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:54:50 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/18 16:01:39 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	is_number(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int	check_dup(t_stack *s)
{
	t_page	*start_page;
	t_page	*marker;

	start_page = s->page;
	while (start_page)
	{
		marker = start_page->next;
		while (marker)
		{
			if (start_page->value == marker->value)
				return (0);
			marker = marker->next;
		}
		start_page = start_page->next;
	}
	return (1);
}

void	error(int n, char **split, t_stack *s)
{
	if (n == 0)
	{
		if (split)
			free_split(split);
		if (s)
			free_stack(s);
		write(2, "Error\n", 6);
		exit(1);
	}
	return ;
}
