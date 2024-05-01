/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:17:13 by vseppane          #+#    #+#             */
/*   Updated: 2024/04/29 17:46:16 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimendpos(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	trim;

	trim = 1;
	i = ft_strlen(s1) - 1;
	while (s1[i] > 0 && trim)
	{
		trim = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				trim = 1;
			j++;
		}
		if (!trim)
			break ;
		i--;
	}
	return (i);
}

static int	ft_trimstartpos(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	trim;

	trim = 1;
	i = 0;
	while (s1[i] != '\0' && trim)
	{
		trim = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				trim = 1;
			j++;
		}
		if (!trim)
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;
	int		i;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = ft_trimstartpos(s1, set);
	end = ft_trimendpos(s1, set);
	if ((end - start + 2) <= 0)
		return (ft_strdup(""));
	res = (char *) malloc((end - start + 2) * sizeof(char));
	if (!res)
		return (NULL);
	res[end - start + 1] = '\0';
	i = 0;
	while (i < end - start + 1)
	{
		res[i] = s1[start + i];
		i++;
	}
	return (res);
}
