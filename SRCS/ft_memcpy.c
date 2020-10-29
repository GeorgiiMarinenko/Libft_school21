/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:56:58 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 18:49:09 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

void	*ft_memcpy(void *dest, const void *srcs, size_t b_size)
{
	unsigned char		*p_dest;
	const unsigned char	*p_srcs;

	p_dest = dest;
	p_srcs = srcs;
	while (b_size--)
		*p_dest++ = *p_srcs++;
	return (dest);
}
