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
    str_num = ft_itoa_uintmax(num);
	if (conversion->width > (unsigned int)num_len && !conversion->precision_on)
		num_space = conversion->width - num_len;
	else if (conversion->width > (unsigned int)num_len &&
            conversion->precision_on)
		num_space = conversion->width - conversion->precision;
    print_extra_width(format, conversion,num_space, pad);
    print_sign(format, conversion);
    print_precision(format, conversion, conversion->precision, num_len);
    while (str_num[i])
    {
        ft_putchar(str_num[i]);
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
    str_num = ft_itoa_uintmax(num);
//    if (conversion->flags.pad_wz)
 //       break; // attempt at error handling
	if (conversion->width >(unsigned int)num_len && !conversion->precision_on)
		num_space = conversion->width - num_len;
	else if (conversion->width > (unsigned int)num_len &&
            conversion->precision_on)
		num_space = conversion->width - conversion->precision;
    print_sign(format, conversion);
    print_precision(format, conversion, conversion->precision, num_len);
    while (str_num[i])
    {
        ft_putchar(str_num[i]);
        format->num_writt++;
        i++;
    }
    print_extra_width(format, conversion, num_space, pad);
}
