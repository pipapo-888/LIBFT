/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:08:37 by knomura           #+#    #+#             */
/*   Updated: 2025/05/12 17:08:13 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*ptr++ = '\0';
}
// int main(void)
// {
//     char str[] = "abcdef";

//     printf("Before bzero: %s\n", str);

//     ft_bzero(str + 2, 3);  // 'c', 'd', 'e' をゼロクリア

//     printf("After  bzero: ");
//     for (int i = 0; i < 6; i++)
//     {
//         if (str[i] == 0)
//             printf("\\0");
//         else
//             printf("%c", str[i]);
//     }
//     printf("\n");

//     return 0;
// }
