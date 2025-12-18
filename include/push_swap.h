/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:56:28 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/15 15:50:48 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "stack.h"
# include "operations.h"
# include "utils.h"

// Error checks / ASCII to Long conversion
int	has_duplicates(t_stack *s);
void	error_exit(t_stack *a, char **split);
long	ft_atol(const char *str);
// Parsing
void	parse(int argc, char *argv[], t_stack *a);
// Indexing to help on sorts
void	indexing(t_stack *s);
// Small sorting algorithm
void	small_sorts(t_stack *a, t_stack *b);
// Big sorting algorithm
void	turkish_sort(t_stack *a, t_stack *b);
// Usefull funcions for sorting
int		is_sorted(t_stack *s);
int		get_min_index(t_stack *s);
int		get_max_index(t_stack *s);
int		get_position(t_stack *s, int index);
void	move_to_top(t_stack *s, int pos);
#endif
