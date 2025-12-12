/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:49:04 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/11 12:49:04 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size);
char **ft_split(char const *s, char c);
void free_split(char **arr);

#endif
