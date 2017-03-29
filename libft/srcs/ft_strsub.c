/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 13:37:33 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/13 14:55:28 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	new = ft_strnew(len);
	s = s + start;
	i = 0;
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
