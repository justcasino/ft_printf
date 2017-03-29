/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:35:05 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/09 16:37:52 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*f_occ;

	f_occ = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*f_occ == (unsigned char)c)
			return (f_occ);
		f_occ++;
	}
	return (NULL);
}
