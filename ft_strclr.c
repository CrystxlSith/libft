/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:48:11 by crystal           #+#    #+#             */
/*   Updated: 2024/03/06 15:03:05 by wbelyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
}

int main(int argc, char const *argv[])
{
	char str[15] = "ou oui baguette";
	ft_strclr(str);	
	return 0;
}
