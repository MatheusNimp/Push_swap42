/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:45:59 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/18 16:00:54 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	parse_token(t_stack *s, char *token, char **tokens)
{
	long	value;
	t_page	*new_page;

	if (!(is_number(token)))
		error(0, tokens, s);
	value = ft_atol(token);
	if (value == LONG_MAX)
		error(0, tokens, s);
	new_page = create_page((int)value);
	if (!(new_page))
		error(0, tokens, 0);
	add_bottom(s, new_page);
}

static void	parse_string(t_stack *s, char *arg)
{
	char	**tokens;
	int		i;

	i = 0;
	tokens = ft_split(arg, ' ');
	if (!(tokens))
		error(0, tokens, s);
	if (tokens[0] == NULL)
		error(0, tokens, s);
	while (tokens[i])
	{
		parse_token(s, tokens[i], tokens);
		i++;
	}
	free_split(tokens);
}

void	parse_args(t_stack *s, int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			error(0, NULL, s);
		parse_string(s, argv[i]);
		i++;
	}
	if (!(check_dup(s)))
		error(0, NULL, s);
}
