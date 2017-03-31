/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_width_precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:47:55 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/15 15:21:09 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    manage_width(t_format *format, t_conversion *conversion)
{
  unsigned int i;

  i = pf_atoi(format);
  conversion->width = i;
}

void    manage_precision(t_format *format, t_conversion *conversion)
{
  if (FSP == '.')
  {
    conversion->precision_on = 1;
    format->pos++;
    conversion->precision = pf_atoi(format);
  }
}
