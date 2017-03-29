/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 18:30:56 by jcasino           #+#    #+#             */
/*   Updated: 2017/01/26 14:58:36 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdupn(const char *src, int len)
{
	char	*new;

	if((new = ft_strnew(len)) == NULL)
		return (NULL);
	else
		ft_strncpy(new, src, len);
	return (new);
}
