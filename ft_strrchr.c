/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:14:42 by vseppane          #+#    #+#             */
/*   Updated: 2024/04/22 17:31:09 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ch;
	char	*lch;

	lch = NULL;
	i = 0;
	c = (char)c;
	ch = (char *)s;
	while (s[i] && c <= 255)
	{
		if (*ch == c + 0)
			lch = (char *)&s[i];
		ch++;
		i++;
	}
	if (*ch == c + 0)
		return (ch);
	else
		return (lch);
}
