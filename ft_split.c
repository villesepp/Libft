/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:35:06 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/03 11:42:36 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordstartend(char const *s, char c, int *start)
{
	int	word;
	int	i;

	word = 0;
	i = *start;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			*start = i;
		}
		else if (s[i] == c && word == 1)
			break ;
		i++;
	}
	return (i - *start);
}

static void	tosubstrings(char const *s, char c, int words, char **strings)
{
	int	start;
	int	len;
	int	i;

	start = 0;
	i = 0;
	while (i < words)
	{
		len = wordstartend(s, c, &start);
		strings[i] = ft_substr(s, start, len);
		i++;
		start += len;
	}
	strings[i] = NULL;
}

static void	countwords(char const *s, char c, int *words)
{
	int	word;

	word = 0;
	while (*s)
	{
		if (*s != c && word == 0)
		{
			word = 1;
			*words += 1;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**strings;

	words = 0;
	countwords(s, c, &words);
	strings = malloc((words + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	tosubstrings(s, c, words, strings);
	return (strings);
}
