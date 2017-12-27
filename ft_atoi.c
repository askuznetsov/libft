/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 15:49:47 by okuznets          #+#    #+#             */
/*   Updated: 2017/12/14 16:58:40 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_delimeter(char temp)
{
	if (temp == ' ' || temp == '\n' || temp == '\t'
		|| temp == '\v' || temp == '\f' || temp == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	size_t				i;
	int					minus;
	unsigned long int	number;

	i = 0;
	minus = 1;
	while (is_delimeter(str[i]))
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	number = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		if ((number > 922337203685477580 || (number == 922337203685477580 &&
			(str[i] - '0') > 7)) && minus == 1)
			return (-1);
		else if ((number > 922337203685477580 ||
				(number == 922337203685477580 &&
				(str[i] - '0') > 8)) && minus == -1)
			return (0);
		number = (number * 10) + (str[i++] - '0');
	}
	return (number * minus);
}
