/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:43:02 by georgy            #+#    #+#             */
/*   Updated: 2020/10/28 23:09:44 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
