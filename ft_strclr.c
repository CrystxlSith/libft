/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:48:11 by crystal           #+#    #+#             */
/*   Updated: 2024/03/05 16:55:47 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s);
	while (j < i)
	{
		s[j] = '\0';
		j++;
	}
	s[j] = '\0';
}

int main(int argc, char const *argv[])
{
	char *str = "ou oui baguette";
	ft_strclr(str);	
	return 0;
}
