/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:50:19 by wbelyne           #+#    #+#             */
/*   Updated: 2024/03/27 00:38:09 by wbelyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*set;
	size_t			i;

	set = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		set[i] = (unsigned char)c;
		i++;
	}
	return (set);
}
