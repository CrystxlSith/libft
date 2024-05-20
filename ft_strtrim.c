/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:52:52 by crystal           #+#    #+#             */
/*   Updated: 2024/05/20 09:09:00 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

int	get_end(const char *s1, const char *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) != NULL)
			break ;
		i++;
	}
	return (len - i);
}

int	get_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strrchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!newstr)
		return (NULL);
	while (i < end - start)
	{
		newstr[i] = s1[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

int main(void)
{
	
	char *str;
	str = ft_strtrim("tripouille   xxx", " x");
	printf("%s", str);
	return 0;
}
