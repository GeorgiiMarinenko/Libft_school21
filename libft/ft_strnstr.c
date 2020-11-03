/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 01:15:30 by georgy            #+#    #+#             */
/*   Updated: 2020/11/03 15:53:24 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			needle_len;
	unsigned int	repetitions;

	needle_len = ft_strlen(needle);
	repetitions = 0;
	if (needle == 0 || *needle == '\0')
		return ((char *)haystack);
	while ((*haystack != '\0') && (len--))
	{
		if (*haystack == *needle)
		{
			repetitions++;
			if (repetitions == needle_len)
				return ((char *)(haystack - (needle_len - 1)));
			haystack++;
			needle++;
		}
		else
		{
			if (repetitions > 0)
				repetitions = 0;
			haystack++;
		}
	}
	return (NULL);
}
