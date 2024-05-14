/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:44:55 by wbelyne           #+#    #+#             */
/*   Updated: 2024/05/14 11:40:09 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*d = *(unsigned char *)src;
		d++;
		src++;
		i++;
	}
	return (dst);
}
