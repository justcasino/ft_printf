/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 09:08:33 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:02:35 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	unsigned_int(t_format *format, t_conversion *conversion, va_list args)
{
	uintmax_t   num;
    char        pad;

    if (conversion->flags.pad_wz)
        pad = '0';
    else
        pad = ' ';
	if (conversion->length == HH)
	{
		//ft_putnbr_intmax() this function has to be written
		return;
	}
	else if (conversion->length == H)
		num = (unsigned short int)va_arg(args, int);
	else if (conversion->length == L)
		num = va_arg(args, unsigned long int);
	else if (conversion->length == LL)
		num = va_arg(args, unsigned long long int);
	else if (conversion->length == J)
		num = va_arg(args, uintmax_t);
	else if (conversion->length == Z)
		num = va_arg(args, size_t);
	else
		num = va_arg(args, unsigned int);
    if (conversion->flags.left_just)
        ft_putnbr_left_just(format, conversion, num, pad);
     else
         ft_putnbr_right_just(format, conversion, num, pad);

}

void	neg_signed_int(t_format *format, t_conversion *conversion,
		intmax_t num)
{
	char		pad;
	uintmax_t	str_num;

	if (conversion->flags.pad_wz)
		pad = '0';
	else
		pad = ' ';
	if (num < 0)
	{
		num = num * -1;
//		ft_putchar('-');
		conversion->is_negative = 1;
//		format->num_writt++;
	}
	str_num = num;
	if (conversion->flags.left_just)
		ft_putnbr_left_just(format, conversion, str_num, pad);
	else
		ft_putnbr_right_just(format, conversion, str_num, pad);
/*	is_neg = 0;
	if (num < 0)
	{
		if (conversion->width && !conversion->flags.left_just &&
				!conversion->flags.pad_wz)
		{
			num = -1 * num;
			format->num_writt++;
			is_neg = 1;
		}
	conversion->is_negative = 1;
	}
	if (conversion->flags.left_just)
		ft_putnbr_left_just(number, conversion, format);
	else
		ft_putnbr_right_just(number, conversion, format);
*/


}


void	signed_int(t_format *format, t_conversion *conversion, va_list args)
{
	intmax_t num;

	if (conversion->length == HH)
	{
		num = (signed char)va_arg(args, int);
      return;
    }
	else if (conversion->length == H)
		num = va_arg(args, int);
	else if (conversion->length == L)
	  	num = va_arg(args, long);
  	else if (conversion->length == LL)
		num = va_arg(args, long long int);
  	else if (conversion->length == J)
		num = va_arg(args, intmax_t);
  	else if (conversion->length == Z)
		num = va_arg(args, size_t);
	else
		num = va_arg(args, int);
	neg_signed_int(format, conversion, num);
}

void	print_int(t_format *format, t_conversion *conversion, va_list args)
{
	if (conversion->specifier == S_DECIMAL)
		signed_int(format, conversion, args);
	if (conversion->specifier == U_DECIMAL)
		unsigned_int( format, conversion, args);
}
