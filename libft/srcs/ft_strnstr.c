/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:06:17 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/11 21:01:29 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*hay;
	const char	*need;
	size_t		d_length;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		hay = big;
		need = little;
		d_length = len;
		while (*need && *need == *hay && d_length)
		{
			need++;
			hay++;
			d_length--;
		}
		if (*need == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
