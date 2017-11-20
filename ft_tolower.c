/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:40:54 by okuznets          #+#    #+#             */
/*   Updated: 2017/11/20 14:57:48 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int		main(void)
{
	char *string = "HELLO WORLD";
	int i;

	i = 0;
	while (string[i])
	{
		string[i] = (char)ft_tolower(string[i]);
		i++;
	}
	printf("%s\n", string);
	return (0);
}
