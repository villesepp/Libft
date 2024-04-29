/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:52:20 by vseppane          #+#    #+#             */
/*   Updated: 2024/04/21 14:52:52 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*fill;
	int				i;

	i = 0;
	fill = str;
	while (n > 0)
	{
		fill[i] = c;
		n--;
		i++;
	}
	return (str);
}
