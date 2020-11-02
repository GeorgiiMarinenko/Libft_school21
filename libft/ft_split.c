/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:16:29 by georgy            #+#    #+#             */
/*   Updated: 2020/11/02 23:45:56 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		cnt_words;

	if (s == NULL)
		return (NULL);
	cnt_words = count_words(s, c);
	i = 0;
	j = 0;
	k = 0;
	char	**rez = (char **)malloc(sizeof(char *) * (cnt_words + 1));
	for (int p = 0; p < (cnt_words + 1); p++)
		rez[p] = (char *)malloc(sizeof(char) * 20);
	if (!rez)
		return (0);
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
	if (j <= cnt_words && cnt_words > 1) rez[cnt_words] = NULL;
	return (rez);
}

// int main(void)
// {
// 	char	*s = "olol                     ";
// 	int		i = 0;
// 	char	**rez = ft_split(s, ' ');

// 	printf("%s\n", rez[0]);
// 	// printf("%s\n", rez[1]);
// 	// printf("%s\n", rez[2]);
// 	// printf("%s\n", rez[3]);
// 	// printf("%s\n", rez[4]);
// 	//  printf("%s\n", rez[5]);
// 	// printf("%s\n", rez[6]);
// 	// printf("%s\n", rez[7]);

// 	return (0);
// }
