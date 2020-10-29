/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:22:16 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 19:08:35 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

void	*ft_memchr(const void *arr, int c, size_t b_size)
{
	char	*p_src;

	p_src = (char *)arr;
	while (b_size--)
	{
		if (*p_src != (char)c)
			p_src++;
		else
			return (p_src);
	}
	return (NULL);
}
