/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 19:45:46 by okuznets          #+#    #+#             */
/*   Updated: 2017/12/14 19:56:00 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
		{
			return (&((char *)s)[len]);
		}
		len--;
	}
	if (c == '\0')
		return (&((char *)s)[len]);
	return (0);
}
