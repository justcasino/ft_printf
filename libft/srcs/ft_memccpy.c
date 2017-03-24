/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:49:20 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/10 00:53:12 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmpdst;
	unsigned char		*tmpsrc;

	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	while (n > 0)
	{
		n--;
		if (*tmpsrc == (unsigned char)c)
		{
			*tmpdst++ = *tmpsrc++;
			return (tmpdst);
		}
		*tmpdst++ = *tmpsrc++;
	}
	return (NULL);
}
