/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:00:00 by crystal           #+#    #+#             */
/*   Updated: 2024/04/25 13:40:30 by wbelyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	ft_alph(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

int main(void)
{
	t_list *head = ft_lstnew("hello");
	ft_lstadd_back(&head, ft_lstnew("world"));
	ft_lstiter(head, &ft_alph);
	return 0;
}
