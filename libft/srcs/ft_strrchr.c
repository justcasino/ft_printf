/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:19:07 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/11 16:29:27 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == c)
			last = (char*)s;
		s++;
	}
	if (c == '\0')
	{
		last = (char*)s;
		return (last);
	}
	else
		return (last);
}
