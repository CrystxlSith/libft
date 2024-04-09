/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:32:45 by crystal           #+#    #+#             */
/*   Updated: 2024/04/09 21:50:05 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(fd, &s[i++], 1);
		if (s[i] == '\0') 
			write(fd, "\n", 1);
	}
}

int main(void)
{
	int i = open("text.txt", O_WRONLY);
	char *str = "manger dans moin cul lulu";
	ft_putendl_fd(str, i);
	return 0;
}
