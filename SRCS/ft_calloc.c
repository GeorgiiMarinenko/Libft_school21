/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 00:10:27 by georgy            #+#    #+#             */
/*   Updated: 2020/10/31 00:16:12 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

void	*ft_calloc(size_t	num, size_t	b_size)
{
	void	*arr_pointer;

	arr_pointer = (void *)malloc(num * b_size);
	if (arr_pointer == NULL)
		return (NULL);
	ft_bzero(arr_pointer, num);
	return (arr_pointer);
}
