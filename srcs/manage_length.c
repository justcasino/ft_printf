/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:47:55 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/12 16:59:40 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void manage_length(t_format *format, t_conversion *conversion)
{
  if (FSP == 'h')
    {
      if (format->string[format->pos + 1] == 'h')
      {
        conversion->length = HH;
        format->pos++;
      }
      else
        conversion->length = H;
    }
  else if (FSP == 'l')
    {
      if (format->string[format->pos + 1]== 'l')
      {
        conversion->length = LL;
        format->pos++;
      }
      else
      conversion->length = L;
    }
    else if (FSP == 'j')
      conversion->length = J;
    else if (FSP == 'z')
      conversion->length = Z;
    if (!conversion->length)
      conversion->length = DEFAULT;
    else
      format->pos++;
}
