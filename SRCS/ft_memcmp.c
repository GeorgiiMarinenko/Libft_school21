/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:30:38 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 18:48:11 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *arr1, const void *arr2, size_t b_size)
{
	size_t	i;
	const unsigned char	*p_arr1;
	unsigned char		*p_arr2;

	p_arr1 = (const unsigned char*)arr1;
	p_arr2 = (unsigned char*)arr2;
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
