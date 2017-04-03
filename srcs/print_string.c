/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 04:10:08 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 00:59:02 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
     write(1, " ", 1);
     i++;
     format->num_writt++;
   }
   while (s[j])
   {
     if (PRINT_PREC_CHECK)
       break;
     write(1, &s[j], 1);
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
     write(1, &s[i], 1);
     i++;
     format->num_writt++;
   }
   while (i < conversion->width)
   {
     write(1, " ", 1);
     i++;
     format->num_writt++;
   }
 }
void    print_chars(t_format *format, t_conversion *conversion,
        char incoming)
{
    if (!conversion->flags.left_just)
    {
        while (conversion->width > 1)
        {
            write(1, " " ,1);
            format->num_writt++;
            conversion->width--;
         }
        write(1, &incoming, 1);
        format->num_writt++;
    }
    else
    {
        write(1, &incoming, 1);
        format->num_writt++;
        while ( 1 < conversion->width)
        {
            write(1, " ", 1);
            format->num_writt++;
            conversion->width--;
        }
    }
}

void    print_c(t_format *format, t_conversion *conversion, char incoming)
{
    print_chars(format, conversion, incoming);
}

void	print_string(t_format *format, t_conversion *conversion, char *string)
{
    if (!string)
        string = ft_strdup("(null)");
	if (conversion->flags.left_just)
		left_justify(format, conversion, string);
	else
		right_justify(format, conversion, string);
}
