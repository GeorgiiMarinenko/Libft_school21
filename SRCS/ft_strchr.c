/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:46:18 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 19:38:17 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str != (char)ch)
			str++;
		else
			return ((char *)str);
	}
	return (NULL);
}
