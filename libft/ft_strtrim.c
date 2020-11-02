/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:14:40 by georgy            #+#    #+#             */
/*   Updated: 2020/11/02 23:47:05 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set_symb(char c, const char *set)
{
	size_t	i;

	i = 0;
	while(set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret_str;
	size_t	start;
	size_t	finish;
	int		i;

	start = 0;
	if (!s1)
		return (NULL);
	if ((s1 == NULL) && (set == NULL))
		return (0);
	while (s1[start] && check_set_symb(s1[start], set))
		start++;
	finish = ft_strlen(s1);
	while (finish > start && check_set_symb(s1[finish - 1], set))
		finish--;
	ret_str = (char *)malloc(sizeof(*s1) * (finish - start + 1));
	if (!ret_str)
		return (NULL);
	i = 0;
	while (start < finish)
		ret_str[i++] = s1[start++];
	ret_str[start] = '\0';
	return (ret_str);
}
