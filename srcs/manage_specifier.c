/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  manage_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:47:55 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 00:12:07 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/includes/libft.h"

/*
**This function checks to see if a character after the $ is a valid specifier,
**if not return 1.
*/
int	invalid_specifier(t_format *format)
{
	int c;

	c = FSP;
	if (c >= 32 && c <= 126)
	{
		if (!ft_isdigit(c) && c != '-' && c != '+' && c != '.' && c != ' ' &&
				c != '#')
			return (1);
	}
	return (0);
}


int     valid_specifier(t_format *format, t_conversion *conversion)
{
  if (FSP == 's' || FSP == 'S')
  {
    conversion->specifier = STRING;
    if (FSP == 'S')
      conversion->length = L;
  }
  else if (FSP == 'p')
    conversion->specifier = POINTER;
  else if (FSP == 'd' || FSP == 'D' || FSP == 'i')
  {
    conversion->specifier = S_DECIMAL;
    if (FSP == 'D')
      conversion->length = L;
  }
  else if (FSP == 'u' || FSP == 'U')
  {
    conversion->specifier = U_DECIMAL;
    if (FSP == 'U')
      conversion->length = L;
  }
  else if (FSP == 'o' || FSP == 'O')
  {
    conversion->specifier = OCTAL;
    if (FSP == 'O')
      conversion->length = L;
  }
  else if (FSP == 'x')
    conversion->specifier = HEX_LOWER;
  else if (FSP == 'X')
    conversion->specifier = HEX_UPPER;
  else if (FSP == 'c' || FSP == 'C')
  {
    conversion->specifier = CHAR;
    if (FSP == 'C')
      conversion->length = L;
  }
  else if (FSP == 'b')
      conversion->specifier = BINARY;
  else if (FSP == 'n')
      conversion->specifier = NONE;
  else
    return (0);
  return (1);
}

void    manage_specifier(t_format *format, t_conversion *conversion)
{
  char *non_specifier_char;

  if (valid_specifier(format, conversion))
  {
    format->pos++;
    return ;
  }
  else if (invalid_specifier(format))
  {
    conversion->specifier = INVALID;
    non_specifier_char = (char*)ft_memset(ft_memalloc(1), FSP, 1);
    print_string(format, conversion, non_specifier_char);
  }
  else
  {
      conversion->specifier = NONE;
      return ;
  }
  format->pos++;

}
