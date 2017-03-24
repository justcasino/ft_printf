/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 01:00:45 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/18 14:02:34 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	num_words(char const *s, char c)
{
	size_t		num;

	num = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			num++;
			while (*s != c && *s)
				s++;
		}
		if (*s == '\0')
			return (num);
		s++;
	}
	return (num);
}

static	size_t	len_word(char const *s, char c)
{
	size_t		len_word;
	size_t		i;

	i = 0;
	len_word = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len_word++;
		i++;
	}
	return (len_word);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**new;
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(new = (char**)malloc(sizeof(char*) * (num_words(s, c)) + 1)))
		return (NULL);
	while (j < num_words(s, c))
	{
		if (!(new[j] = (char*)malloc(sizeof(char) * len_word(&s[i], c) + 1)))
			return (NULL);
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			new[j][k++] = s[i++];
		new[j][k] = '\0';
		j++;
	}
	new[j] = NULL;
	return (new);
}
