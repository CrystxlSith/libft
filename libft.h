/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:36:35 by wbelyne           #+#    #+#             */
/*   Updated: 2024/03/05 16:44:56 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlen(const char *str);
int	ft_strcmp(char *s1, char *s2);
int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isascii(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strdup(const char *s);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);

#endif