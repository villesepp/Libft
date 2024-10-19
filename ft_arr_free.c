/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:34:28 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/19 13:34:38 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Free all strings inside of an array
*/
void	ft_arr_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	i--;
	while (i >= 0)
	{
		free(arr[i]);
		arr[i] = NULL;
		i--;
	}
	free(arr);
}
