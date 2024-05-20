/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:31:43 by crystal           #+#    #+#             */
/*   Updated: 2024/05/20 11:41:10 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	
	j = 0;
	i = start;
	while (s[i] && j < len)
	{
		j++;
		i++;
	}
	str = (char *)malloc(sizeof(char) * j + 1);
	if (!str)
		return (NULL);
	j = 0;
	i = start;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
int main(void)
{
	char *s = ft_substr("tripouille", 100, 1);
	printf("%s", s);
	return 0;
}
