/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:31:03 by crystal           #+#    #+#             */
/*   Updated: 2024/03/27 12:50:48 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

/* DESCRIPTION : La fonction memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient d'abord copiés dans une zone temporaire 
qui ne chevauche ni src ni dest, et les octets sont ensuite copiés de la zone temporaire vers dest.  
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t	i;
	
	i = 0;
	tmp = 0;
	while (i < n)
	{
		tmp[i] = *(unsigned char *)src;
		i++;
	}
	i = 0;
	while (n)
	{
		*(unsigned char *)dest = tmp[i];
		i++;
		n--;
	}
	return (dest);
}

int main() {
    char str[] = "Hello, world!";
    char dst[20]; // Zone mémoire temporaire allouée automatiquement
    size_t len = strlen(str) + 1; // Longueur de la chaîne incluant le caractère nul

    memmove(dst, str, len); // Déplacement de la chaîne vers la zone temporaire
    printf("str: %s\n", str);
    printf("dst: %s\n", str);

    return 0;
}


/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	
}


int main(void)
{
	
	return 0;
}*/
