/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:01:47 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 15:09:03 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t b_size)
{
	size_t	i;

	i = 0;
	if (b_size)
	{
		b_size--;
		while ((src[i] != '\0') && (b_size))
		{
			dst[i] = src[i];
			i++;
			b_size--;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(dst));
}
