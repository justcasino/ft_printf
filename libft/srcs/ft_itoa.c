/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:47:50 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/11 22:41:59 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	dig_len(long n)
{
	size_t		i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long		num;
	char		*new;
	long		is_neg;
	size_t		count;

	num = n;
	count = dig_len(num);
	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	new = ft_strnew(count + is_neg);
	if (new == NULL)
		return (NULL);
	if (is_neg == 1)
	{
		num = -num;
		new[0] = '-';
	}
	while (count > 0)
	{
		new[count + is_neg - 1] = (num % 10) + '0';
		count--;
		num = num / 10;
	}
	return (new);
}
