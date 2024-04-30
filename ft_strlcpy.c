/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:23:40 by vseppane          #+#    #+#             */
/*   Updated: 2024/04/23 14:20:30 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	size;

	if (dst == NULL || src == NULL)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize <= 0)
		return (srclen);
	if (srclen >= dstsize)
		size = dstsize - 1;
	else
		size = srclen;
	while (size > 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst++ = '\0';
	return (srclen);
}
