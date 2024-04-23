/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:34:46 by crystal           #+#    #+#             */
/*   Updated: 2024/04/23 14:42:09 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete(void *content)
{
	free(content);
}

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
// 	ft_lstdelone(elem, &delete);
// 	return 0;
// }