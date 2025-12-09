/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:15:38 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/09 16:41:33 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_page
{
	int				value;
	int				index;
	struct s_page	*next;
}	t_page;

typedef struct s_stack
{
	struct s_page	*page;
	int				size;
}	t_stack;

#endif
