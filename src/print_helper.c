/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 22:30:41 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/16 19:53:55 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*  void    print_hash(t_format *format, t_conversion *conversion)
{
    if (conversion->flags.hash)
    {
        if (conversion->specifier == OCTAL)
            write(1, "0", 1);
        else if (conversion->specifier == HEX_LOWER)
            ft_putstr("0x");
        else if (conversion->specifier == HEX_UPPER)
            ft_putstr("0X");
        format->num_writt++;
    }
}
*/

void    print_precision(t_format *format, t_conversion *conversion, 
        int zero_print, int num_len)
{
    if (conversion->precision_on && 
            zero_print > num_len)
        zero_print = zero_print - num_len;
    {
        while( zero_print > 0)
        {
            ft_putchar('0');
            format->num_writt++;
            zero_print--;
        }
    }
}

void    print_sign(t_format *format, t_conversion *conversion)
{
    if (conversion->flags.sign)
    {
        if (conversion->is_negative)
        {
            ft_putchar('-');
            format->num_writt++;
        }
        else
        {
            ft_putchar('+');
            format->num_writt++;
         }
    }
    else if (conversion->flags.pos_begin_blank)
    {
        if (!conversion->is_negative)
        {
            ft_putchar(' ');
            format->num_writt++;
        }
        else
        {
            ft_putchar ('-');
            format->num_writt++;
        }
    }
    else if (conversion->is_negative)
    {
        ft_putchar ('-');
        format->num_writt++;
    }
}

void    print_extra_width(t_format *format, t_conversion *conversion, 
        int num_space, char pad)
{
    if (conversion->is_negative || conversion->flags.pos_begin_blank ||
            conversion->flags.sign)
    {
        if (conversion->flags.pad_wz && conversion->is_negative)
        {
           ft_putchar('-');
           format->num_writt++;
           conversion->is_negative = 0;
        }
        num_space--;
    }
    while (num_space > 0)
    {
        ft_putchar(pad);
        num_space--;
        format->num_writt++;
    }
}
