/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:05:23 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 16:39:36 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <stdlib.h>
#include "stack.h"

// swap
void swap_silent(t_stack *s);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
// push
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
// rotate
void rotate_silent(t_stack *s);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
// reverse rotate
void rr_silent(t_stack *s);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);
#endif
