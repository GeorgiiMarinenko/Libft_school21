/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:43:07 by georgy            #+#    #+#             */
/*   Updated: 2020/10/29 00:33:08 by georgy           ###   ########.fr       */
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

int	ft_memcmp(const void *arr1, const void *arr2, size_t b_size)
{
	size_t	i;
	char	*p_arr1;
	char	*p_arr2;

	p_arr1 = (char*)arr1;
	p_arr2 = (char*)arr2;
	i = 0;
	while (i <= b_size)
	{
		printf("arr1[%zu]: %c\t\t", i, p_arr1[i]);
		printf("arr2[%zu]: %c\n", i, p_arr2[i]);
		if (p_arr1[i] < p_arr2[i])
			return ((p_arr1 - p_arr2)*(-1));
		else if (p_arr1[i] > p_arr2[i])
			return (p_arr1 - p_arr2);
		i++;
	}
	return (0);
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

	char	arr1[15] = "123546";
	char	arr2[15] = "123357";
	int		rez;


	rez = ft_memcmp(arr1, arr2, 4);
	printf("\nmemcmp rez: %d\n", rez);
	return (0);
}
