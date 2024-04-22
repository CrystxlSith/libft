/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:14:28 by wbelyne           #+#    #+#             */
/*   Updated: 2024/04/21 11:30:08 by wbelyne          ###   ########.fr       */
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
	printf("%s", (char *)list->content);
	ft_lstdelone(list, delete);
	char *content = (char *)malloc(sizeof(char) * 6);
	sprintf(content, "Hello");
	t_list *elem = ft_lstnew(content);
	ft_lstdelone(elem, &delete);
	return 0;
}
