/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 13:02:05 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/14 13:02:05 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack a;
	t_stack b;

	if (argc < 2)
		return (0);

	init_stack(&a);
	init_stack(&b);

	parse_args(&a, argc, argv);

	if (is_sorted(&a))
	{
		free_stack(&a);
		return (0);
	}

	if (a.size <= 5)
		small_sorts(&a, &b);
	else
		turkish_sort(&a, &b);

	free_stack(&a);
	return (0);
}
