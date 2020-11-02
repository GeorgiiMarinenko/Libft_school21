/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:52:09 by georgy            #+#    #+#             */
/*   Updated: 2020/11/03 00:39:07 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	cnt_rank_number(int n, int minus)
{
	int	numb_len;

	numb_len = 1;
	while ((n /= 10))
		numb_len++;
	return (numb_len + minus);
}

static int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * (-1));
}

char *ft_itoa(int n)
{
	char	*res;
	int		numb_len;
	int		minus;
	int		digit;

	if (n < 0)
		minus = 1;
	else
		minus = 0;
	numb_len = cnt_rank_number(n, minus);
	res = (char *)malloc(sizeof(char) * (numb_len + 1));
	if (res == NULL)
		return NULL;
	res[numb_len - 1] = '\0';
	while (numb_len >= minus)
	{
		digit = n % 10;
		res[numb_len--] = ft_abs(digit) + '0';
		n /= 10;
	}
	if (minus < 0)
		res[0] = '-';
	return (res);
}

int main(void)
{
	char	*i1 = ft_itoa(-62);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);

	printf("\n i1 = %s\n", i1);
	printf("\n i2 = %s\n", i2);
	printf("\n i3 = %s\n", i3);
}
