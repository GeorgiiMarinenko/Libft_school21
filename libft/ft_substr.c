/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:57:34 by georgy            #+#    #+#             */
/*   Updated: 2020/11/01 13:38:02 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret_str;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	ret_str = (char *)malloc(sizeof(*s) * (len + 1));
	if (ret_str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i >= start) && (j < len))
		{
			ret_str[j] = s[i];
			j++;
		}
		i++;
	}
	ret_str[j] = '\0';
	return (ret_str);
}
