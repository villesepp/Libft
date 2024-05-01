/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:32:42 by vseppane          #+#    #+#             */
/*   Updated: 2024/04/23 12:51:44 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*n;
	size_t	i;
	int		j;

	if ((int)ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && needle[j] && len > i)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && haystack[i] && needle[j]
				&& len > i)
			{
				if (needle[j + 1] == '\0')
					return (n = (char *)haystack - j + i);
				i++;
				j++;
			}
		}
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}
