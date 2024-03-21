/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:02:38 by crystal           #+#    #+#             */
/*   Updated: 2024/03/21 20:52:26 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrdup(const char *s, int j)
{
	int	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * j + 1);
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
	char 	**str;
	int	i;
	int	count;
	int	j;

	j = 0;
	count = countword(s, c);
	i = 0;
	str = (char **)malloc(sizeof(char *) * count + 1);
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

int main()
{
	int	c = 0;
	char const *str = "mange,mes,,,,,,couillles,h,j";
	char **splitt = ft_split(str, ',');
	while (splitt[c])
	{
		ft_putstr(splitt[c]);
		ft_putchar('\n');
		free(splitt[c]);
		c++;
	}
	free(splitt);
	return 0;
}
