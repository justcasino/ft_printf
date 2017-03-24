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

/*  void	print_precision_string(t_format *format, t_conversion *conversion,
        char *string)
{
	unsigned int	i;

	i = 0;
	while (string[i] && i <= conversion->precision)
	{
		ft_putchar(string[i]);
		i++;
		format->num_writt++;
	}
 } */
void    print_chars(t_format *format, t_conversion *conversion,
        char *incoming)
{
    if (!conversion->flags.left_just)
        left_justify(format, conversion, incoming);
    else
        right_justify(format, conversion, incoming);
}

void    print_c(t_format *format, t_conversion *conversion, char incoming)
{
    print_chars(format, conversion, &incoming);
}

void	print_string(t_format *format, t_conversion *conversion, char *string)
{
//    if (conversion->precision_on)
//		print_precision_string(format, conversion, string);
//    if (!string)
//        string = ft_strdup("(null)");
	if (conversion->flags.left_just)
		left_justify(format, conversion, string);
	else
		right_justify(format, conversion, string);
}
