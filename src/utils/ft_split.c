/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamaral <maamaral@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:31 by maamaral          #+#    #+#             */
/*   Updated: 2025/12/15 15:58:50 by maamaral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

static int	word_count(char const *s, char c)
{
	size_t	i;
	int		word_c;
	int		in_word;

	word_c = 0;
	in_word = 0;
	i = 0;
	while ((s[i]))
	{
		if ((s[i] != c && in_word == 0))
		{
			in_word = 1;
			word_c++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (word_c);
}

static char	*word_add(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc((sizeof(char) * len + 1));
	if (!(word))
		return ((void *)0);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static void	free_all(char **split, int i)
{
	while (--i >= 0)
		free(split[i]);
	free(split);
}

static char	**create_split(char const *s, char c, char **split)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			split[i] = word_add(s, c);
			if (!(split[i]))
			{
				free_all(split, i);
				return ((void *)0);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	split[i] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_c;

	if (!(s))
		return ((void *)0);
	word_c = word_count(s, c);
	split = malloc((sizeof(char *)) * (word_c + 1));
	if (!(split))
		return ((void *)0);
	split = create_split(s, c, split);
	return (split);
}
