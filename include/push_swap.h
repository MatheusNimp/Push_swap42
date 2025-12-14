/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:56:28 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 10:56:28 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "stack.h"
#include "operations.h"
#include "utils.h"

// Error checks / ASCII to Long conversion
long ft_atol(const char *str);
int is_number(const char *str);
int check_dup(t_stack *s);
void error(int n);
// Parsing
void parse_args(t_stack *s, int argc, char **argv);
// Indexing to help on sorts
void indexing(t_stack *s);
// Small sorting algorithm
void small_sorts(t_stack *a, t_stack *b);
// Big sorting algorithm
void turkish_sort(t_stack *a, t_stack *b);
// Usefull funcions for sorting
int is_sorted(t_stack *s);
int get_min_index(t_stack *s);
int get_max_index(t_stack *s);
int get_position(t_stack *s, int index);

#endif
