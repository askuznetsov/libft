/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:04:55 by okuznets          #+#    #+#             */
/*   Updated: 2017/11/20 15:22:52 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isprint(int c)
{
	if  (c >= 32 && c <= 126)
			return (1);
	else
		return (0);
}

int		main(void)
{
	char str[20] = "barbaris";
	int i;

	i = 0;
	while (str[i])
	{
		printf("%i\n", ft_isprint(str[i]));
		i++;
	}
	return (0);
}
