/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 01:15:30 by georgy            #+#    #+#             */
/*   Updated: 2020/10/31 00:04:44 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"

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
