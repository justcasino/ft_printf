/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*    main.c                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*    By: jcasino <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*    Created: 2017/03/12 16:45:43 by jcasino           #+#    #+#            */
/*    Updated: 2017/03/20 00:36:54 by jcasino          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void     print_binary(t_format *format, t_conversion *conversion, va_list args)
{
    intmax_t    n;
    intmax_t    num2;
    int         remain;
    int         i;
    n = va_arg(args, int);

    num2 = 0;
    remain = 0;
    i = 1;
    while (n)
    {
        remain = n % 2;
        n /= 2;
        num2 += remain*i;
        i *= 10;
    }
    neg_signed_int(format, conversion, num2);
}
