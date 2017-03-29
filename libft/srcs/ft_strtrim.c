/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:29:22 by jcasino           #+#    #+#             */
/*   Updated: 2016/11/14 00:46:45 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*cpy;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (!*s)
		return (ft_strnew(0));
	cpy = s + ft_strlen(s) - 1;
	while (*cpy == ' ' || *cpy == '\t' || *cpy == '\n')
		cpy--;
	return (ft_strsub(s, 0, cpy - s + 1));
}
