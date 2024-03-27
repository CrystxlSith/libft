/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:52:22 by crystal           #+#    #+#             */
/*   Updated: 2024/03/27 20:26:46 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La fonction memchr() examine les n premiers 
octets de la zone mémoire pointée par s à la recherche du caractère c.
Le premier octet correspondant à c (
interprété comme un unsigned char) arrête l'opération.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)s == c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
