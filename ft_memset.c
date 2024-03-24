/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:50:19 by wbelyne           #+#    #+#             */
/*   Updated: 2024/03/24 11:59:06 by wbelyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while ((char *)b[i] && i < len)
	{
		(char *)b[i] = c;
		i++;
	}
	return ((char *)b);	
}

int main(void)
{
	char *str = "mangerd cul";
	ft_putstr(ft_memset(str, 'a', 4));
	return 0;
}
