/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:19:59 by georgy            #+#    #+#             */
/*   Updated: 2020/10/30 23:24:19 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

int		ft_isascii(int c)
{
	int	flag;

	flag = 0;

	if (c < 0 || c > 127)
		return (0);
	else
	{
		flag = 1;
		return (flag);
	}
}
