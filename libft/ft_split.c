/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:16:29 by georgy            #+#    #+#             */
/*   Updated: 2020/11/09 20:18:07 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char space)
{
	size_t	i;
	int		cnt_words;

	i = 0;
	cnt_words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (*s && *s == space)
			s++;
		if (*s && *s != space)
		{
			cnt_words++;
			while (*s && *s != space)
				s++;
		}
	}
	return (cnt_words);
}

char		*create_word(const char *s, char space)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	j = 0;
	while (s[i] && s[i] != space)
		i++;
	if (!(dst = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != space)
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (dst);
}

static void	arr_free(char **arr, size_t index)
{
	while (index)
	{
		index--;
		free(arr[index]);
	}
}

char		**ft_split(char const *s, char c)
{
	char	**rez;
	size_t	cnt_word;
	size_t	k;

	k = 0;
	if (!s)
		return (NULL);
	cnt_word = count_words(s, c);
	if (!(rez = (char **)malloc(sizeof(char *) * (cnt_word + 1))))
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(rez[k] = create_word(s, c)))
				arr_free(rez, k);
			k++;
			while (*s && *s != c)
				s++;
		}
	}
	rez[k] = NULL;
	return (rez);
}
