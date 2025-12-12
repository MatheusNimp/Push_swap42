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
// parsing
void parse_args(t_stack *s, int argc, char **argv);
// Indexing to help on sorts
void indexing(t_stack *s);
// Algorithms
void sort_small(t_stack *a, t_stack *b);
void sort_big(t_stack *a, t_stack *b);

#endif
