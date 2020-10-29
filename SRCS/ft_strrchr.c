/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:39:01 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/29 19:59:31 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*temp_symb = NULL;
	while (*str != '\0')
	{
		if (*str != (char)ch)
			str++;
		else
			temp_symb = (char *)str;
	}
	return (temp_symb);
}
