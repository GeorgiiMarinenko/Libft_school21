/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:21:17 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 18:49:19 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t b_size)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t	i;

	i = 0;
	p_dst = (unsigned char*)dst;
	p_src = (const unsigned char*)src;
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
