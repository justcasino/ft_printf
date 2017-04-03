/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 23:51:38 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/16 18:52:51 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char*)b;
	while (len-- > 0)
		*a++ = (unsigned char)c;
	return (b);
}
