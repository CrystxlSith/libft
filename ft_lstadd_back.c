/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:17:38 by crystal           #+#    #+#             */
/*   Updated: 2024/04/18 18:24:40 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
		ft_lstadd_front(alst, new);
	else
		ft_lstlast(*alst)->next = new;
}

// int main() {
//     t_list *head = NULL;
//     t_list *element1 = (t_list *)malloc(sizeof(t_list));
//     t_list *element2 = (t_list *)malloc(sizeof(t_list));
//     t_list *element3 = (t_list *)malloc(sizeof(t_list));

//     element1->content = "Premier";
//     element2->content = "Deuxième";
//     element3->content = "Troisième";
//     ft_lstadd_back(&head, element1);
//     ft_lstadd_back(&head, element2);
//     ft_lstadd_back(&head, element3);

//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     free(element1);
//     free(element2);
//     free(element3);
//     return 0;
// }