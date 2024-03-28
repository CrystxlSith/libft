/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:31:37 by crystal           #+#    #+#             */
/*   Updated: 2024/03/28 13:55:55 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strnstr - Find the first substring in a length-limited string*/

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 || s1 == s2)
		return (s1);
	while (s2[i] && len)
	{
		j = 0;
		if (s2[i] == s1[j])
		{
			while (s1[j] && s2[i + j] == s1[j] && len)
			{
				len--;
				j++;
			}
		}
		if (s1[j] == '\0')
			return ((char *)s2 + i);
		i++;
		len--;
	}
	return (NULL);
}
