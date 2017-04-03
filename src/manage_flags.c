/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:47:55 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/16 19:35:52 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_flags(t_format *format, t_conversion *conversion)
{
	if (FSP == '+')
	{
		conversion->flags.sign = 1;
		conversion->flags.pos_begin_blank = 0;
		return (1);
	}
	else if (FSP == '-')
	{
		conversion->flags.left_just = 1;
		conversion->flags.pos_begin_blank = 0;
        return (1);
	}
	else if (FSP == ' ')
	{
		if (!conversion->flags.sign)
			conversion->flags.pos_begin_blank = 1;
		return(1);
	}
	else if (FSP == '0')
	{
		if (!conversion->flags.left_just)
			conversion->flags.pad_wz = 1;
			return (1);
	}
	else if (FSP == '#')
	{
		conversion->flags.hash = 1;
		return (1);
	}
	return (0);
}

void	manage_flags(t_format *format, t_conversion *conversion)
{
	while(check_flags(format, conversion))
		format->pos++;
}
