/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:14:28 by wbelyne           #+#    #+#             */
/*   Updated: 2024/04/23 14:48:34 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	
}

int main(void)
{
	t_list *list = ft_lstnew("manger");
	t_list *list = ft_lstnew("du");
	t_list *list = ft_lstnew("pain");
	printf("%s", (char *)list->content);
	ft_lstdelone(list, delete);
	char *content = (char *)malloc(sizeof(char) * 6);
	sprintf(content, "Hello");
	t_list *elem = ft_lstnew(content);
	ft_lstdelone(elem, &delete);
	return 0;
}
