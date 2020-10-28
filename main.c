/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:43:07 by georgy            #+#    #+#             */
/*   Updated: 2020/10/28 23:29:44 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove (void *dst, const void *src, size_t b_size)
{
	char	*p_dst;
	char	*p_src;
	char	*copy;
	size_t	i;

	i = 0;
	p_dst = (char*)dst;
	p_src = (char*)src;
	if (p_src < p_dst)
	{
		while (--b_size)
			*(p_dst + b_size) = *(p_src + b_size);
	}
	else
	{
		while (i < b_size)
		{
			*(p_dst + i) = *(p_src + i);
			i++;
		}
	}
	return (dst);
}

void *ft_memchr (const void *arr, int c, size_t b_size)
{
	char	*p_src;

	p_src = (char *)arr;
	while (b_size)
	{
		if (*p_src != (char)c)
			p_src++;
		else
			return (p_src);
	}
	return (NULL);
}

int	main(void)
{
	char	src_orig[15] = "1234567890";
	char	dst_orig[15] = "123123123";

	char	src[15] = "1234567890";
	char	dst[15] = "123123123";
	memmove(&dst_orig[3], &src_orig[3], 3);
	ft_memmove(&dst[3], &src[3], 3);
	printf("memmove: %s -> ", dst_orig);
	printf("%s\n", dst);

	char	src_chr[15] = "12345678";
	char	*sym;

	printf("\nold arr: %s\n", src_chr);
	sym = ft_memchr(src_chr, '9', 9);
	if (sym != NULL)
		sym[0]= '!';

	printf("new arr: %s\n", src_chr);
	return (0);
}
