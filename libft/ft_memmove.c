/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:21:17 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/31 16:46:28 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t b_size)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t	i;

	i = 0;
	p_dst = (unsigned char*)dst;
	p_src = (const unsigned char*)src;
	if ((p_dst == NULL) && (p_src == NULL))
		return ((char *)src);
	if (p_dst < p_src)
	{
		while (i < b_size)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (b_size > 0)
		{
			p_dst[b_size - 1] = p_src[b_size - 1];
			b_size--;
		}
	}
	return (dst);
}
