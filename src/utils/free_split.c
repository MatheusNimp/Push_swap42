/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 22:13:22 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/11 22:13:22 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

void free_split(char **arr)
{
	int i;

	if (!(arr))
		return;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
