/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_just.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 21:37:45 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:11:38 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/includes/libft.h"

//void    ft_putnbr_hh(t_format *format, t_conversion *conversion, intmax_t num)
//{
  /*    char    pad;

    (conversion->flags.pad_wz = 1 ? pad = '0' : pad = ' ' )
    if (num < 0)
    {
        num = num * -1;
        conversion->is_negative = 1;
    } */
//}

void	ft_putnbr_right_just(t_format *format, t_conversion *conversion,
		uintmax_t num, char pad)
{
	int     num_space;
    char    *str_num;
    int     i;
    int     num_len;

	num_space = 0;
    i = 0;
    num_len = int_len(num, 10);
    if (conversion->is_negative)
        num_len = num_len + 1;
    str_num = ft_itoa_uintmax(num);
	if (conversion->width > (unsigned int)num_len && !conversion->precision_on)
		num_space = conversion->width - num_len;
	else if (conversion->width > (unsigned int)num_len &&
            conversion->precision_on)
		num_space = conversion->width - conversion->precision;
    if (conversion->precision_on && conversion->precision == 0 && num == 0)
    {
        print_extra_width(format, conversion, num_space, pad,  num_len);
        return ;
    }
    print_extra_width(format, conversion,num_space, pad, num_len);
    print_sign(format, conversion);
    print_precision(format, conversion, conversion->precision, num_len);
    while (str_num[i])
    {
        write(1, &str_num[i], 1);
//        ft_putchar(str_num[i]);
        format->num_writt++;
        i++;
    }
//    free(str_num);
}

void    ft_putnbr_left_just(t_format *format, t_conversion *conversion,
        uintmax_t num, char pad)
{
    int     num_space;
    char    *str_num;
    int     i;
    int     num_len;

    num_space = 0;
    i = 0;
    num_len = int_len(num, 10);
    if (conversion->is_negative)
        num_len = num_len + 1;
    str_num = ft_itoa_uintmax(num);
//    if (conversion->flags.pad_wz)
 //       break; // attempt at error handling
    if (num == 0 && conversion->precision && conversion->precision == 0)
        return ;
	if (conversion->width >(unsigned int)num_len && !conversion->precision_on)
		num_space = conversion->width - num_len;
	else if (conversion->width > (unsigned int)num_len &&
            conversion->precision_on)
		num_space = conversion->width - conversion->precision;
    print_sign(format, conversion);
    print_precision(format, conversion, conversion->precision, num_len);
    while (str_num[i])
    {
        write(1, &str_num[i], 1);
//        ft_putchar(str_num[i]);
        format->num_writt++;
        i++;
    }
    print_extra_width(format, conversion, num_space, pad, num_len);
}
