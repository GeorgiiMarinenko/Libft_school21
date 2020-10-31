/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:16:05 by georgy            #+#    #+#             */
/*   Updated: 2020/10/30 23:24:14 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

int		ft_isalnum(int c)
{
	int	flag;

	flag = 0;

	if (((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')) && (c < '0' || c > '9'))
		return (0);
	else
	{
		flag = 1;
		return (flag);
	}
}
