/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:34:46 by crystal           #+#    #+#             */
/*   Updated: 2024/04/24 17:59:52 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
// 	// t_list *list = ft_lstnew("manger");
// 	// printf("%s", (char *)list->content);
// 	// ft_lstdelone(list, delete);
// 	char *content = (char *)malloc(sizeof(char) * 6);
// 	sprintf(content, "Hello");
// 	t_list *elem = ft_lstnew(content);
// 	printf("%s", (char *)elem->content);
// 	ft_lstdelone(elem, &ft_delete);
// 	printf("%s", (char *)elem->content);
// 	return 0;
// }