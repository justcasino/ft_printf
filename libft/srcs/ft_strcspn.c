/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:25:19 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/18 19:25:47 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	pos_found;

	if (s1)
		return (0);
	pos_found = ft_strlen(s1);
	i = 0;
	while (s2)
	{
		j = 0;
		while (s1)
		{
			if (s2[i] == s1[j])
			{
				if (j < pos_found)
					pos_found = j;
			}
			j++;
		}
		i++;
	}
	return (pos_found);
}
