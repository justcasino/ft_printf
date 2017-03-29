/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:58:51 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/06 17:13:34 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	const char *hay;
	const char *need;

	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		hay = big;
		need = little;
		while (*need && *need == *hay)
		{
			need++;
			hay++;
		}
		if (*need == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}
