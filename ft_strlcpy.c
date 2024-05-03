/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:23:40 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/03 15:39:03 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	size;

	src_len = ft_strlen(src);
	if (dstsize <= 0)
		return (src_len);
	if (src_len >= dstsize)
		size = dstsize - 1;
	else
		size = src_len;
	while (size > 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst++ = '\0';
	return (src_len);
}
