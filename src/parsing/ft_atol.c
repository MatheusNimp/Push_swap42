/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:16:19 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/15 16:05:18 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	jump(const char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}

static int	overflow_check(long n, int digit, int sign)
{
	if (sign == 1 && (n > (INT_MAX - digit) / 10))
		return (1);
	if (sign == -1 && (-n < (INT_MIN + digit) / 10))
		return (1);
	return (0);
}

long	ft_atol(const char *str)
{
	int		i;
	long	n;
	int		sign;
	int		digit;

	if (!str)
		return (LONG_MAX);
	i = 0;
	n = 0;
	sign = jump(str, &i);
	if (str[i] < '0' || str[i] > '9')
		return (LONG_MAX);
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (overflow_check(n, digit, sign))
			return (LONG_MAX);
		n = n * 10 + digit;
		i++;
	}
	if (str[i] != '\0')
		return (LONG_MAX);
	return (n * sign);
}
