/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_arr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:55 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/28 13:44:05 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
 * Prints all strings in an array separated by a space. Assumes there is a NULL
 * as the last pointer. Prints a newline at the end.
 */
void	ft_putstr_arr_fd(char **arr, int fd)
{
	int i;
	
	i = 0;
	while(arr[i] != NULL)
	{
		ft_putstr_fd(arr[i], fd);
		ft_putchar_fd(' ', fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

/*
int	main (void)
{
	char* arr[5] = { "123", "456", "7", "890" }; // last one left null intentionally!
	ft_putstr_arr_fd(arr, 1);
	return(0);
}
*/
