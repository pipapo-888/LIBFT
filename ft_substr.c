/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:23:53 by knomura           #+#    #+#             */
/*   Updated: 2025/05/07 19:08:08 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substr_len;
	char	*dest;

	i = 0;
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		substr_len = ft_strlen(s) - start;
	else
		substr_len = len;
	dest = malloc(substr_len + 1);
	if (dest == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main ()
// {
//     char *src;
//     char *sub;

//     // テストケース①：普通の使い方
//     src = "Hello, world!";
//     sub = ft_substr(src, 6, 5);  // "world"
//     printf("① \"%s\"\n", sub);
//     free(sub);

//     // テストケース②：start が文字列の長さを超える
//     src = "short";
//     sub = ft_substr(src, 4, 3);  // ""
//     printf("② \"%s\"\n", sub);
//     free(sub);

//     // テストケース③：len が 0
//     src = "abcdef";
//     sub = ft_substr(src, 2, 0);  // ""
//     printf("③ \"%s\"\n", sub);
//     free(sub);

//     // テストケース④：start + len が文字列の末尾を超える
//     src = "abcdef";
//     sub = ft_substr(src, 4, 10);  // "ef"
//     printf("④ \"%s\"\n", sub);
//     free(sub);

//     // テストケース⑤：start = 0, len = 全体
//     src = "abcdef";
//     sub = ft_substr(src, 0, ft_strlen(src));  // "abcdef"
//     printf("⑤ \"%s\"\n", sub);
//     free(sub);

//     // テストケース⑥：空文字列からの部分文字列
//     src = "";
//     sub = ft_substr(src, 0, 5);  // ""
//     printf("⑥ \"%s\"\n", sub);
//     free(sub);

//     return 0;
// }
