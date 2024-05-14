/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:30:23 by crystal           #+#    #+#             */
/*   Updated: 2024/05/14 11:40:55 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE 20

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	i = 0;
	dlen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	
	while (src[i] && size)
	{
		dst[dlen + i] = src[i];
		size--;
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + i);
}

// int main() {
//     char dst[SIZE] = "Hello, ";
//     char src[] = "world!";
//     size_t dst_len = strlen(dst);

//     // Concaténation sécurisée de src à dst
//     size_t result = ft_strlcat(dst, src, SIZE);

//     // Affichage du résultat
//     printf("Chaîne concaténée : %s\n", dst);
//     printf("Longueur totale : %zu\n", result);
//     printf("Longueur initiale de dst : %zu\n", dst_len);
//     printf("Taille de dst après concaténation : %zu\n", strlen(dst));
    
//     return 0;
// }