/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:24:55 by georgy            #+#    #+#             */
/*   Updated: 2020/11/01 13:43:39 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret_str;
	size_t	i;
	size_t	j;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	ret_str = (char *)malloc(*s1 * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ret_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ret_str[i] = s2[j];
		i++;
		j++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
