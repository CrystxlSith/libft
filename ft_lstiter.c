/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:00:00 by crystal           #+#    #+#             */
/*   Updated: 2024/04/24 21:29:13 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_alph(void *content)
{
	size_t	i;

	i = 0;
	while (content[i])
	{
		content[i] += 32;
		content++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	
}

int main(void)
{
	t_list *head = ft_lstnew("hello");
	ft_lstadd_back(&head, ft_lstnew("world"));
	ft_lstiter(head, &ft_alph);
	return 0;
}
