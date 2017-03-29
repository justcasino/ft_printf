/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:52:02 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/06 23:12:17 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*strdst;
	const char			*strsrc;

	strdst = dst;
	strsrc = src;
	while (n-- > 0)
		*strdst++ = *strsrc++;
	return (dst);
}
