/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:12:59 by georgy            #+#    #+#             */
/*   Updated: 2020/11/01 13:44:48 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, const int fd)
{
	if (str == NULL)
		return;
	write(fd, str, ft_strlen(str));
}
