/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:28:02 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 18:48:19 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

void *ft_memccpy (void *dest, const void *srcs, int c, size_t b_size)
{
	unsigned char		*p_dest;
	const unsigned char	*p_srcs;

	p_dest = dest;
	p_srcs = srcs;
	while (b_size--)
		if ((*p_dest++ = *p_srcs++) == (char)c) return (dest);
	return (dest);
}
