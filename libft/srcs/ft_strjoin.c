/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:04:21 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/13 18:58:22 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*start_new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (new == NULL)
		return (NULL);
	start_new = new;
	while (*s1)
		*start_new++ = *s1++;
	while (*s2)
		*start_new++ = *s2++;
	*start_new = '\0';
	return (new);
}
