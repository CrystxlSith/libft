/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:02:38 by crystal           #+#    #+#             */
/*   Updated: 2024/05/15 17:09:04 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrdup(const char *s, int j)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (j + 1));
	if (!dup)
		return (NULL);
	while (s[i] && i < j)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	countword(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			i++;
			while (*str && *str != c)
				str++;
		}
		if (*str == c)
			str++;
	}
	return (i);
}

int	len_word(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && *str != c)
	{
		str++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		count;
	int		j;

	j = 0;
	count = countword(s, c);
	i = 0;
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		j = len_word(s, c);
		str[i] = ft_strrdup(s, j);
		i++;
		s += j;
	}
	str[i] = 0;
	return (str);
}
