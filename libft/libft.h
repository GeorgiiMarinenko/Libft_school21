/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:51:43 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/31 00:32:42 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t b_size);
void	ft_bzero(void *dist, size_t count);
void	*ft_memcpy(void *dest, const void *srcs, size_t b_size);
void	*ft_memccpy (void *dest, const void *srcs, int c, size_t b_size);
void	*ft_memmove(void *dst, const void *src, size_t b_size);
void	*ft_memchr (const void *arr, int c, size_t b_size);
int		ft_memcmp(const void *arr1, const void *arr2, size_t b_size);
size_t	ft_strlen (const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t b_size);
size_t	ft_strlcat(char *dst, const char *src, size_t b_size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	*ft_calloc(size_t	num, size_t	b_size);
char	*ft_strdup(char *src);

#endif
