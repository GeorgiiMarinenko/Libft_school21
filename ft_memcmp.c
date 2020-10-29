/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:36:37 by georgy            #+#    #+#             */
/*   Updated: 2020/10/29 00:03:43 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
		if (p_arr1[i] < p_arr2[i])
			return ((p_arr1 - p_arr2)*(-1));
		else if (p_arr1[i] > p_arr2[i])
			return (p_arr1 - p_arr2);
		i++;
	}
	return (0);
}
