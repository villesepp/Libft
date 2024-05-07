/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:05:12 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/07 12:20:49 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void *del(void)
{
	

int main(void)
{
	char *s = ft_strdup("hello");
	char *s1 = ft_strdup("world");
	char *s2 = strdup("!");
	size_t t = ft+lstnew(s);
	size_t t1 = ft+lstnew(s1);
	size_t t2 = ft+lstnew(s2);
	t->next = t1;
	t1->next = t2;
	ft_lstclear(t1, del);
}
*/
