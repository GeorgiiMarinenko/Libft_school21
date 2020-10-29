/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:51:12 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/28 14:51:13 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

// static void	*ft_memset(void *dest, int c, size_t b_size)
// {
// 	char	*p_arr;

// 	p_arr = dest;
// 	while (b_size > 0)
// 	{
// 		*(p_arr++) = c;
// 		b_size--;
// 	}
// 	return (p_arr);
// }

void	ft_bzero(void *dist, size_t count)
{
	ft_memset(dist, '\0', count);
}
