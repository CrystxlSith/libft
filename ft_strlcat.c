/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:30:23 by crystal           #+#    #+#             */
/*   Updated: 2024/05/15 14:28:35 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcat - Append a length-limited, NUL-terminated string to another 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	dlen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	i = dlen;
	while (src[dlen - i] && dlen < size - 1)
	{
		dst[dlen] = src[dlen - i];
		dlen++;
	}
	if (dlen < size)
		dst[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}

// int main() {
//     char dst[SIZE] = "Hello, ";
//     char src[] = "world!";
//     size_t dst_len = strlen(dst);

//     size_t result = ft_strlcat(dst, src, SIZE);

//     printf("Chaîne concaténée : %s\n", dst);
//     printf("Longueur totale : %zu\n", result);
//     printf("Longueur initiale de dst : %zu\n", dst_len);
//     printf("Taille de dst après concaténation : %zu\n", strlen(dst));
//     return 0;
// }