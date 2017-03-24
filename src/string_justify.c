/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  string_justify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 03:44:04 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/15 15:33:46 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/includes/libft.h"

void	right_justify(t_format *format, t_conversion *conversion, char *s)
{
  size_t  i;
  size_t  j;
  size_t  len;

  i = 0;
  j = 0;
  if (RIGHT_PREC_CHECK)
    len = conversion->precision;
  else
    len = ft_strlen(s);
  while ((len + i) < conversion->width)
  {
    ft_putchar(' ');
    i++;
    format->num_writt++;
  }
  while (s[j])
  {
    if (PRINT_PREC_CHECK)
      break;
    ft_putchar(s[j]);
    j++;
    format->num_writt++;
  }
}

void	left_justify(t_format *format, t_conversion *conversion, char *s)
{
  size_t i;

  i = 0;
  while (s[i])
  {
    if (LEFT_PREC_CHECK) //what cases is this needed
      break ;
    ft_putchar(s[i]);
    i++;
    format->num_writt++;
  }
  while (i < conversion->width)
  {
    ft_putchar(' ');
    i++;
    format->num_writt++;
  }
}
