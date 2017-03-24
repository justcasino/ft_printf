/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:47:55 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/15 14:24:06 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
** Wrote another atoi because, of the '-' flag has to be accounted for
*/
unsigned int  pf_atoi(t_format *format)
{
  unsigned int i;

  i = 0;
  while (FSP >= '0' && FSP <= '9')
  {
    i = i * 10 + (FSP - '0');
    format->pos++;
  }
  return (i);
}
