/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:47:55 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:11:06 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*char    *conversion(unsigned int num, int base)
{
  static char
}
int     manage_cids(char **format, va_list ap)
{
  int i;

  if (*(format) == 'c')
    ft_putchar(va_arg(ap, char));
  else if (*(*format) == 'C')

  else if (*(*format) == 'i')

  else if (*(*format) == 'd')
  {
    i = va_arg(ap, int);
    if (i < 0)
    {
      i = -i;
      ft_putchar('-');
    }
    ft_putstr()
  }
  else if (*(*format) == 'D')
  else if (*(*format) == 's')
    ft_putstr(va_arg(ap, char *));

}*/
void	print_args(t_format *format, t_conversion *conversion, va_list args)
{
	if (conversion->specifier == S_DECIMAL)
		print_int(format, conversion, args);
	else if (conversion->specifier == U_DECIMAL)
		print_int(format, conversion, args);
  	else if (conversion->specifier == CHAR)
    {
        if (conversion->length == L)
            print_wint(format, conversion, va_arg(args, wint_t char_in));
        else
            print_c(format, conversion, va_arg(args, int char_in));
    }
	else if (conversion->specifier == STRING)
        if (conversion->specifier == L)
            print_wchar(format, conversion, va_arg(args, wchar_t *))
		print_string(format, conversion, va_arg(args, char *));
 	else if (conversion->specifier == OCTAL)
        print_base(format, conversion, args);
    else if (conversion->specifier == HEX_LOWER || conversion->specifier == HEX_UPPER)
         print_base(format, conversion, args);
	else if (conversion->specifier == POINT)
        print_pointer(format, conversion, va_arg(args, void*);)

}

void    manage_format(t_format *format, va_list args)
{
  t_conversion  conversion;

  ft_memset(&conversion, '\0', sizeof(conversion));
  manage_flags(format, &conversion);
  manage_width(format, &conversion);
  manage_precision(format, &conversion);
  manage_length(format, &conversion);
  manage_specifier(format, &conversion);
  // have a case if conversion.specifier is nothing
  if (conversion.specifier == NONE)
      return ;
  print_args(format, &conversion, args);
}

/*
** Goes through the args and checks to see if there is a specifier or not
** the format->location is already set to 0.  If not specifier prints out string
*/
void    traverse(t_format *format, va_list args)
{
  while (FSP)
  {
    if (FSP == '%')
      {
        format->pos++;
        if (FSP == '%')
        {
            write(1, "%", 1);
            format->num_writt++;
            format->pos++;
        }
        manage_format(format, args);
      }
    else
    {
      ft_putchar(FSP);
      format->num_writt++;
      format->pos++;
    }
  }
}

int     ft_printf(const char *string, ...)
{
  va_list      args;
  t_format     format;

  ft_memset(&format, '\0', sizeof(format));
  va_start(args, string);
  format.string = string;
  traverse(&format, args);
  va_end(args);

  return (format.num_writt);
}
