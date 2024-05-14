/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:46:19 by crystal           #+#    #+#             */
/*   Updated: 2024/05/14 11:39:26 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizeint(long int n)
{
	int	i;
	
	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int	size;
	char	*result;

	nb = n;
	size = sizeint(nb);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
		size = size + 1;
	}
	result[size] = '\0';
	while (nb)
	{
		result[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	return (result);
}