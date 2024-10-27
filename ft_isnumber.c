/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:38:15 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/27 13:22:17 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if the string argument is a number
 * returns the number of digits + minus(0 or 1)
*/
int	ft_isnumber(const char *str)
{
	int	i;
	int	digits;
	int	negative;

	negative = 0;
	digits = 0;
	i = 0;
	if (str[i] == '-')
	{
		i++;
		negative = 1;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		if (ft_isdigit(str[i]))
			digits = 1;
		i++;
	}
	return (digits + negative);
}
