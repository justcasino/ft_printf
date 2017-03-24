/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 03:39:50 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/15 15:50:48 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*d;
	int		i;

	if (!s)
		return (0);
	d = ft_strnew(ft_strlen(s));
	i = 0;
	if (d == NULL)
		return (NULL);
	while (s[i])
	{
		d[i] = f(s[i]);
		i++;
	}
	return (d);
}
