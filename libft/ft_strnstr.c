/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 01:15:30 by georgy            #+#    #+#             */
/*   Updated: 2020/11/02 23:45:08 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			needle_len;
	unsigned int	repetitions;

	i = 0;
	needle_len = ft_strlen(needle);
	repetitions = 0;
	if ((char *)haystack == 0)
		return ((char *)haystack);
	if (needle == 0 || *needle == '\0')
		return ((char *)haystack);
	if (haystack == 0)
		return ((char *)&haystack[0]);
	if (needle == 0)
		return ((char *)&needle[0]);
	// if (ft_strlen(needle) == 0)
	// 	return ((char *)&haystack[0]);
	while((*haystack != '\0') && (i < len))
	{
		if (*haystack == *needle)
		{
			repetitions++;
			if (repetitions == needle_len)
				return ((char *)(haystack - (needle_len-1)));
			haystack++;
			needle++;
			i++;
		}
		else
		{
			if (repetitions > 0)
				repetitions = 0;
			haystack++;
			i++;
		}
	}
	return (NULL);
}
