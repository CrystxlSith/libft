/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:58:22 by crystal           #+#    #+#             */
/*   Updated: 2024/03/29 17:08:12 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, nmemb);
	return (ptr);
}

int main(int argc, char const *argv[])
{
	
	return 0;
}
