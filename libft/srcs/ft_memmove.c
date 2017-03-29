/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:11:35 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/03 21:26:26 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char const	*tmp_src;
	char		*tmp_dst;

	tmp_dst = (char*)dst;
	tmp_src = (const char*)src;
	if (tmp_src < tmp_dst)
	{
		tmp_dst = tmp_dst + len - 1;
		tmp_src = tmp_src + len - 1;
		while (len-- > 0)
			*tmp_dst-- = *tmp_src--;
	}
	else
	{
		while (len-- > 0)
			*tmp_dst++ = *tmp_src++;
	}
	return (dst);
}
