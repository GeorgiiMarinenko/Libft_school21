/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:20:58 by georgy            #+#    #+#             */
/*   Updated: 2020/10/28 23:24:24 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
