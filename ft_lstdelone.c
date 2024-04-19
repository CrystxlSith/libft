/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:34:46 by crystal           #+#    #+#             */
/*   Updated: 2024/04/19 09:56:19 by wbelyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete(void *lst)
{
	free(lst->content);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	
}

int main(int argc, char const *argv[])
{
	t_list *list = ft_lstnew("manger");
	ft-ft_lstdelone(list, &delete);
	return 0;
}
