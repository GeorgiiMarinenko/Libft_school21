/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy <georgy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:52:34 by aarlena           #+#    #+#             */
/*   Updated: 2020/10/31 00:18:42 by georgy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
#pragma	region	ft_memset()
	char	srcs1_1[15] = "1234567890";
	char	srcs1[15] = "1234567890";

	memset(srcs1_1, '1', 10);
	ft_memset(srcs1, '1', 10);
	printf("*memset: %s -> ", srcs1_1);
	printf("%s\n", srcs1);
#pragma endregion

#pragma	region	ft_bzero()
	char	srcs2[15] = "1234567890";
	char	srcs2_1[15] = "1234567890";

	ft_bzero(srcs2, 10);
	bzero(srcs2_1, 10);
	printf("*bzero: %s -> ", srcs2_1);
	printf("%s\n", srcs2);
#pragma endregion

#pragma	region	ft_memcpy()
	char	srcs3_1[15] = "1234567890";
	char	dst3_1[15] = "";
	char	srcs3[15] = "1234567890";
	char	dst3[15] = "";

	memcpy(dst3_1, srcs3_1, 6);
	printf("*memcpy: %s -> ", dst3_1);
	ft_memcpy(dst3, srcs3, 6);
	printf("%s\n", dst3);
#pragma endregion

#pragma	region	ft_memccpy()
	char	srcs4_1[15] = "1234567890";
	char	dst4_1[15] = "";
	char	srcs4[15] = "1234567890";
	char	dst4[15] = "";

	memccpy(dst4_1, srcs4_1, '6', 7);
	ft_memccpy(dst4, srcs4, '6', 7);
	printf("*memccpy: %s -> ", dst4_1);
	printf("%s\n", dst4);
#pragma endregion

#pragma	region	ft_memmove()
	char	src_orig[15] = "1234567890";
	char	dst_orig[15] = "123123123";

	char	src[15] = "1234567890";
	char	dst[15] = "123123123";
	memmove(&dst_orig[3], &src_orig[3], 3);
	ft_memmove(&dst[3], &src[3], 3);
	printf("*memmove: %s -> ", dst_orig);
	printf("%s\n", dst);
#pragma	endregion

#pragma	region	ft_memchr()
	char	src_chr[15] = "12345678";
	char	*sym;

	printf("*memchr:\nold arr: %s\n", src_chr);
	sym = ft_memchr(src_chr, '4', 9);
	if (sym != NULL)
		sym[0]= '!';
	printf("new arr: %s\n", src_chr);
#pragma	endregion

#pragma	region	ft_memcmp()
	char	arr1_1[15] = "123456";
	char	arr2_1[15] = "123457";

	char	arr1_2[15] = "123646";
	char	arr2_2[15] = "123457";

	char	arr1_3[15] = "123176";
	char	arr2_3[15] = "123457";
	int		rez_memcmp;

	printf("\n\n*memcmp:\nsymb: 4 will be compared\n");
	printf("\narr1_1: %s \narr2_1: %s", arr1_1, arr2_1);
	rez_memcmp = ft_memcmp(arr1_1, arr2_1, 4);
	printf("\nrez: %d\n", rez_memcmp);

	printf("\narr1_1: %s \narr2_1: %s", arr1_2, arr2_2);
	rez_memcmp = ft_memcmp(arr1_2, arr2_2, 4);
	printf("\nrez: %d\n", rez_memcmp);

	printf("\narr1_1: %s \narr2_1: %s", arr1_3, arr2_3);
	rez_memcmp = ft_memcmp(arr1_3, arr2_3, 4);
	printf("\nrez: %d\n", rez_memcmp);
#pragma	endregion

#pragma	region	ft_strlen()
char	str[15] = "123456789";
size_t		orig_rez_strlen;
size_t		rez_strlen;

orig_rez_strlen = strlen(str);
rez_strlen = ft_strlen(str);
printf("\nstrlen:\narr: %s\norig_rez = %zu\nrez = %zu", str, orig_rez_strlen, rez_strlen);
#pragma endregion

#pragma region	ft_strlcpy()
char	buf_orig_strlen[10] = "";
char	src_orig_strlen[17] = "This is new line";

char	buf_strlen[10] = "";
char	src_strlen[17] = "This is new line";

size_t	orig_size_strlen;
size_t	size_strlen;
printf("\norig_buf before cpying: %s\t string: %s\n", buf_orig_strlen, src_orig_strlen);
printf("buf before cpying: %s\t\t string: %s\n", buf_strlen, src_strlen);
orig_size_strlen = strlcpy(buf_orig_strlen, src_orig_strlen, sizeof(buf_orig_strlen));
size_strlen = ft_strlcpy(buf_strlen, src_strlen, sizeof(buf_strlen));
printf("\norig_size = %zu\t\tsize = %zu\n", orig_rez_strlen, size_strlen);
printf("orig_buf after cpying: %s\nbuf after cpying: %s\n", buf_orig_strlen, buf_strlen);
#pragma endregion

#pragma region ft_strlcat()
size_t	rez_strlcat;
size_t	rez_ft;
char	arr1_strlcat[12] = "Hello";
char	arr2_strlcat[7] = " world";

char	arr1_strlcat_ft[12] = "Hello";
char	arr2_strlcat_ft[7] = " world";
printf("\n*strlcat:\narr1: %s \narr2: %s\n", arr1_strlcat, arr2_strlcat);

rez_strlcat = strlcat(arr1_strlcat, arr2_strlcat, sizeof(arr1_strlcat));
rez_ft = ft_strlcat(arr1_strlcat_ft, arr2_strlcat_ft, sizeof(arr1_strlcat_ft));
printf("\norig_rez: %s\n", arr1_strlcat);
printf("rez = %zu\n", rez_strlcat);

printf("\nrez_ft: %s\n", arr1_strlcat_ft);
printf("rez = %zu\n\n\n", rez_ft);
#pragma endregion

#pragma region strchr()
char	arr1_strchr_orig[15] = "123456789";
char	*rez_orig_strchr;

char	arr1_strchr[15] = "123456789";
char	*rez_strchr;

rez_orig_strchr = strchr(arr1_strchr_orig, '3');
printf("*strchr\narr: %s, find: 3", arr1_strchr_orig);
printf("\nsymb - %ld\n", rez_orig_strchr - arr1_strchr_orig + 1);

rez_strchr = ft_strchr(arr1_strchr, '3');
printf("\narr: %s, find: 3", arr1_strchr);
printf("\nsymb - %ld\n\n", rez_strchr - arr1_strchr + 1);
#pragma endregion

#pragma region strchr()
char	strrchr_arr[12] = "12344512345";
char	*rez_orig_strrchr;

char	strrchr_arr_ft[12] = "12344512345";
char	*rez_orig_strrchr_ft;

rez_orig_strrchr = strrchr(strrchr_arr, '4');
printf("*strrchr:\nsymb on the position: %ld", rez_orig_strrchr - strrchr_arr + 1);

rez_orig_strrchr_ft = strrchr(strrchr_arr_ft, '4');
printf("\nsymb on the position: %ld", rez_orig_strrchr_ft - strrchr_arr_ft + 1);

#pragma endregion

#pragma region strnstr()
char	source_orig[11] = "1234567890";
char	search_orig[10] = "123";
char	*rez_strnstr_orig;

char	source[11] = "0123456789";
char	search[10] = "123";
char	*rez_strnstr;

rez_strnstr_orig = strnstr(source_orig, search_orig, 17);
printf("\n\n*strnstr:\norig_rez = %ld\n\n", rez_strnstr_orig-source_orig+1);

rez_strnstr = ft_strnstr(source, search, 17);
printf("rez = %ld\n", rez_strnstr-source+1);
#pragma endregion

#pragma region strncmp()
int	orig_rez_strncmp;
int	rez_strncmp;

char	strncmp_arr1[11] = "1234567890";
char	strncmp_arr2[11] = "1234567890";

orig_rez_strncmp = strncmp(strncmp_arr1, "5743", 3);
rez_strncmp = ft_strncmp(strncmp_arr2, "543", 3);
printf("\n*strncmp:\norig_rez = %d\nrez = %d ", orig_rez_strncmp, rez_strncmp);
#pragma endregion

#pragma region atoi()
int	atoi_orig_rez;
int	atoi_rez;

//char arr_atoi[11] = "	 -+--+1234jkl5";
atoi_orig_rez = atoi("	 -1234jkl5");
printf("\n\n*atoi:\norig_rez = %d\n", atoi_orig_rez);
atoi_rez = ft_atoi("	 -1234jkl5");
printf("\nrez = %d\n", atoi_rez);
#pragma endregion

#pragma region isalpha()
printf("\nis alpha? - %d\n", ft_isalpha('q'));
#pragma endregion

#pragma region isadigit()
printf("\nis digit? - %d\n", ft_isdigit('4'));
#pragma endregion

#pragma region isalnum()
printf("\nis digit? - %d\n", ft_isalnum('4'));
printf("is alpha? - %d\n", ft_isalnum('q'));
#pragma endregion

#pragma region isascii()
printf("\nis ascii? - %d\n", ft_isascii('\n'));
#pragma endregion

#pragma region isascii()
printf("\nis printable? - %d\n", ft_isprint('0'));
#pragma endregion

#pragma region toupper()
printf("\nmake symb 'a' upper - %c\n", (char)ft_toupper('a'));
#pragma endregion

#pragma region tolower()
printf("\nmake symb 'A' lower - %c\n", (char)ft_tolower('A'));
#pragma endregion

#pragma region calloc()
char	*arr = (char *)ft_calloc(3, sizeof(char));
printf("*calloc empty arr: %s\n", arr);
#pragma endregion
	return (0);
}
