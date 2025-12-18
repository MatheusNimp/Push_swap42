/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:45:59 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/15 16:02:50 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	parse_arg(char *arg, t_stack *a)
{
	char	**split;
	int		i;
	long	value;

	split = ft_split(arg, ' ');
	if (!split)
		error_exit(a, NULL);
	i = 0;
	while (split[i])
	{
		value = ft_atol(split[i]);
		if (value == LONG_MAX)
			error_exit(a, split);
		add_bottom(a, create_page((int)value));
		i++;
	}
	free_split(split);
}

void	parse(int argc, char *argv[], t_stack *a)
{
	int	i;

	if (argc < 2)
		return ;
	init_stack(a);
	i = 1;
	while (i < argc)
	{
		parse_arg(argv[i], a);
		i++;
	}
	if (has_duplicates(a))
		error_exit(a, NULL);
	indexing(a);
}

