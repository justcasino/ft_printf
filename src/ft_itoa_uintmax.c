/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_uintmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 14:53:47 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:17:54 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/includes/libft.h"

size_t int_len(uintmax_t num, int base)
{
	size_t	len;

	len = 0;
    if (num == 0)
        len = 1;
/*  	if (num < 0)
		num = -num; */
	while (num > 0)
	{
		len++;
		num = num / base;
	}
	return (len);
}

int load_base(t_conversion *conversion)
{
    int base;

	if (conversion->specifier == OCTAL)
		base = 8;
	else if (conversion->specifier == HEX_LOWER)
		base = 16;
	else if (conversion->specifier == HEX_UPPER)
		base = 16;
	else
		base = 10;
//    ft_putstr("\n ***the base: ");
//    ft_putnbr(base);
//    ft_putstr("***\n");
	return (base);
}

char    *load_base_char(t_conversion *conversion, int base)
{
    char    *base_char;

    base_char = ft_strnew(base);
	if (conversion->specifier == OCTAL)
		base_char = ft_strcpy(base_char, "01234567");
	else if (conversion->specifier == HEX_LOWER)
		base_char = ft_strcpy(base_char, "0123456789abcdef");
	else if (conversion->specifier == HEX_UPPER)
		base_char = ft_strcpy(base_char, "0123456789ABCDEF");
	return (base_char);
}

char *ft_itoa_base(uintmax_t num, t_conversion *conversion)
{
    char    *result;
    int     base;
    char    *base_char;
    int     num_len;

    base = load_base(conversion);
	base_char = load_base_char(conversion, base);
    num_len = int_len(num, base);
	if (!(result = ft_strnew(num_len)))
		return (NULL);
	result[num_len--] = '\0';
    while (num)
    {
//        if (conversion->specifier == OCTAL)
//        {
//           result[num_len] = (num % base);
//            ft_putstr("\nnumbers being printed out: ");
//            ft_putnbr(num % base);
//            ft_putchar('\n');
//            ft_putstr("----");
//            ft_putnbr(1%8);
//            ft_putchar('\n');
//        }
//		else
			result[num_len] = base_char[num % base];
//      ft_putchar(result[num_len]);
      num /= base;
      num_len--;
    }
//    ft_putstr(base_char);
//    ft_putchar('\n');
    return (result);
}

char *ft_itoa_uintmax(uintmax_t num)
{
	char	*str_num;
	size_t	len;

	len = int_len(num, 10);
	if (!(str_num = ft_strnew(len)))
		return (NULL);
	str_num[len] = '\0';
 //   ft_putnbr(len);
 //   ft_putchar(' ');
//    ft_putnbr(ft_strlen(str_num));
    while (len + 1 > 0)
    {
        str_num[len - 1] = (num % 10) + '0';
        len--;
        num = num / 10;
    }
//    ft_putnbr(ft_strlen(str_num));
    return (str_num);
}
