/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:00:08 by knomura           #+#    #+#             */
/*   Updated: 2025/05/12 14:23:29 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	if (c == 1024)
		return ((char *)(s + len));
	while (len--)
	{
		if ((unsigned char)s[len] == (unsigned char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
