/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:58:22 by crystal           #+#    #+#             */
/*   Updated: 2024/05/16 15:29:49 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE_MAX 18446744073709551615UL

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	if (size >= SIZE_MAX || nmemb >= SIZE_MAX)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// int main(void)
// {
// 	void	*ptr;
// 	ptr = ft_calloc(0,0);
// 	free(ptr);
// 	ptr = ft_calloc(0,5);
// 	free(ptr);
// 	return 0;
// }
