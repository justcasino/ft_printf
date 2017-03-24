/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 15:04:08 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:17:17 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"



void    ft_putnbr_base(t_format *format, t_conversion *conversion,
        uintmax_t num, char pad, int base)
{
    int     num_space;
    char    *str_num;
    int     i;
    int     num_len;

    num_space = 0;
    i = 0;
    num_len = int_len(num, base);
    str_num = ft_itoa_base(num, conversion);
    if (conversion->width > (unsigned int)num_len && !conversion->precision_on)
        num_space = conversion->width - num_len;
    else if (conversion->width > (unsigned int)num_len &&
            conversion->precision_on)
        num_space = conversion->width - conversion->precision;
    if (!conversion->flags.left_just)
         print_extra_width(format, conversion, num_space, pad);
    print_sign(format, conversion);
    print_precision(format, conversion, conversion->precision, num_len);
    while (str_num[i])
    {
        ft_putchar(str_num[i]);
        format->num_writt++;
        i++;
    }
    if (conversion->flags.left_just)
        print_extra_width(format, conversion, num_space, pad);
  //  free(str_num);
}

void    check_length(t_format *format, t_conversion *conversion,
        va_list args, int base)
{
    uintmax_t   num;
    char        pad;

    if (conversion->flags.pad_wz)
        pad = '0';
    else
        pad = ' ';
    if (conversion->length == HH)
    {
        //ft_putnbr_base() must write this
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
    ft_putnbr_base(format, conversion, num, pad, base);
 }

void    print_base(t_format *format, t_conversion *conversion, va_list args )
{
    int base;

    if (conversion->specifier == OCTAL)
        base = 8;
    if (conversion->specifier == HEX_LOWER ||
            conversion->specifier ==  HEX_UPPER)
        base = 16;
    check_length(format, conversion, args, base);
}
