/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:19:01 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/16 15:22:24 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end_src;

	i = 0;
	while (dst[i] && i < size)
	{
		i++;
	}
	end_src = i;
	while (src[i - end_src] && i < size - 1)
	{
		dst[i] = src[i - end_src];
		i++;
	}
	if (end_src < size)
		dst[i] = '\0';
	return (end_src + ft_strlen(src));
}
