/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:57:49 by vseppane          #+#    #+#             */
/*   Updated: 2024/10/27 13:31:28 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main (void)
{
	char str1[] = "string is looooooooong";
	char str2[] = "string is looooooooong";
	char str3[] = "string is kooooooooong";
	char str4[] = "string is l";
	char str5[] = "";
	char *str6 = NULL;

	printf("same       %d\n", ft_strcmp(str1, str2));
	printf("diff char  %d\n", ft_strcmp(str1, str3));
	printf("diff len   %d\n", ft_strcmp(str1, str4));
	printf("empty      %d\n", ft_strcmp(str1, str5));
	printf("NULL       %d\n", ft_strcmp(str1, str6));
}
*/
