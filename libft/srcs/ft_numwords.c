/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:05:37 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/22 17:02:11 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numwords(char const *s, char c)
{
	size_t	num;

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
