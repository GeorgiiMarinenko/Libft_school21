/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <aarlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:16:29 by georgy            #+#    #+#             */
/*   Updated: 2020/11/03 17:44:30 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char symb, char space)
{
	if (symb == space)
		return (1);
	else
		return (0);
}

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
		if ((s[i] != space) && (s[i + 1] == space))
		{
			cnt_words++;
			i++;
			continue;
		}
		i++;
	}
	return (cnt_words);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	p;
	int		cnt_words;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	p = 0;
	cnt_words = count_words(s, c);
	char	**rez = (char **)malloc(sizeof(char *) * (cnt_words + 1));
	if (!rez)
		return (0);
	while (p < (cnt_words + 1))
	{
		rez[p] = (char *)malloc(sizeof(char) * 20);
		if (!rez[p])
			return (NULL);
		p++;
	}
	while (s[i] != 0)
	{
		if (ft_is_space(s[i], c) && (s[i] != '\0'))
		{
			i++;
			continue;
		}
		rez[j][k] = s[i];
		if (ft_is_space(s[i], c) == 0 && ft_is_space(s[i+1], c) == 1)
		{
			rez[j][k+1] = '\0';
			j++;
			k = -1;
		}
		i++;
		k++;
	}
	if (j <= cnt_words && cnt_words > 1)
		rez[cnt_words] = NULL;
	return (rez);
}
