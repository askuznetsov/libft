/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <okuznets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:28:51 by okuznets          #+#    #+#             */
/*   Updated: 2018/01/16 15:25:26 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count_word(const char *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t		ft_count_letters(const char *s, char c, size_t i)
{
	size_t count;

	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static char			*ft_setarray(const char *s, char c, char *ar, size_t i)
{
	size_t k;

	k = 0;
	while (s[i] != c && s[i] != '\0')
		ar[k++] = s[i++];
	ar[k] = '\0';
	return (ar);
}

char				**ft_strsplit(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;
	size_t	words;
	size_t	k;

	i = 0;
	words = ft_count_word(s, c);
	if (!s || !(str = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	str[words] = NULL;
	k = 0;
	while (i < words)
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		len = ft_count_letters(s, c, k);
		if (!(str[i] = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		str[i] = ft_setarray(s, c, str[i], k);
		while (s[k] != c && s[k] != '\0')
			k++;
		i++;
	}
	return (str);
}
