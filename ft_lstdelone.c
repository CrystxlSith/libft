/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:34:46 by crystal           #+#    #+#             */
/*   Updated: 2024/04/19 15:29:13 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete(void *content)
{
	free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	// if (!lst || !del)
	// 	return ;
	// (del)(lst->content);
	// free(lst);
	// lst = NULL;
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

int main(void)
{
	// t_list *list = ft_lstnew("manger");
	// printf("%s", (char *)list->content);
	// ft_lstdelone(list, delete);
	t_list *elem = ft_lstnew("Hello");
	ft_lstdelone(elem, delete);
	return 0;
}
