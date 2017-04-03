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


void    print_hash(t_format *format, t_conversion *conversion)
{
    if (conversion->precision_on && conversion->precision == 0 &&
            conversion->specifier != OCTAL)
       return ;
     if (conversion->flags.hash)
     {
         if (conversion->specifier == OCTAL)
         {
             write(1, "0", 1);
             format->num_writt++;
         }
         else if (conversion->specifier == HEX_LOWER)
         {
             ft_putstr("0x");
             format->num_writt += 2;
         }
         else if (conversion->specifier == HEX_UPPER)
         {
             ft_putstr("0X");
             format->num_writt += 2;
         }
     }
}

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
    if (num == 0 && !conversion->precision_on)
    {
        write(1, "0", 1);
        format->num_writt++;
        return ;
    }
    //if (num == 0 && conversion->precision_on && !conversion->precision)
    //    return ;
    if (conversion->flags.hash)
    {
        if (conversion->specifier == OCTAL)
            num_len += 1;
        else
            num_len += 2;
    }
    str_num = ft_itoa_base(num, conversion);
    if (conversion->width > (unsigned int)num_len && !conversion->precision_on)
        num_space = conversion->width - num_len;
    else if (conversion->width > (unsigned int)num_len &&
            conversion->precision_on)
        {
            if (conversion->precision > (unsigned int)num_len)
                num_space = conversion->width - conversion->precision;
            else if (conversion->precision == 0)
                num_space = conversion->width;
            else
                num_space = conversion->width - num_len;
        }
    if (!conversion->flags.left_just)
    {
        if (conversion->flags.pad_wz)
            print_hash(format, conversion);
        print_extra_width(format, conversion, num_space, pad, num_len);
        if (!conversion->flags.pad_wz)
            print_hash(format, conversion);
    }
 //        print_extra_width(format, conversion, num_space, pad);
    print_sign(format, conversion);
    if (conversion->flags.left_just)
        print_hash(format, conversion);
    print_precision(format, conversion, conversion->precision, num_len);
//    print_hash(format, conversion);
    while (str_num[i])
    {
        write(1, &str_num[i], 1);
//        ft_putchar(str_num[i]);
        format->num_writt++;
        i++;
    }
    if (conversion->flags.left_just)
        print_extra_width(format, conversion, num_space, pad, num_len);
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
        num = (unsigned char)va_arg(args, int);
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
