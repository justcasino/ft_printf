/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <justincasino@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 04:49:15 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:19:27 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

#include "../libft/includes/libft.h"
#include <stdarg.h>
#include <stdint.h>

# define FSP (format->string[format->pos])
# define RIGHT_PREC_CHECK (conversion->precision_on && conversion->precision < (unsigned int) ft_strlen(s) && conversion->specifier != INVALID)
# define LEFT_PREC_CHECK (conversion->precision_on && conversion->specifier != INVALID && i == conversion->precision)
# define PRINT_PREC_CHECK (conversion->precision_on && j == conversion->precision && conversion->specifier != INVALID)

int ft_printf(const char *string, ...);

typedef struct    s_format
{
  const char  *string;
  size_t      pos;
  size_t      num_writt;
}             t_format;

typedef struct    s_flags
{
  int   left_just;
  int   pad_wz;
  int   sign;
  int   pos_begin_blank;
  int   hash;
}       t_flags;


typedef enum        e_length
{
    DEFAULT, HH, H, L, LL, J, Z
}       t_length;

typedef enum        e_specifier
{
    S_DECIMAL, U_DECIMAL, OCTAL, HEX_LOWER, HEX_UPPER, CHAR, STRING, POINTER,
    INVALID, NONE
}       t_specifier;

typedef struct    s_conversion
{
  t_flags       flags;
  unsigned int  width;
  unsigned int  precision;
  int           precision_on;
  t_length      length;
  t_specifier   specifier;
  int           is_negative;
}               t_conversion;

/*
** functions in ft_printf
*/
int     ft_printf(const char *string, ...);
void    traverse(t_format *format, va_list args);
void    manage_format(t_format *format, va_list args);
void    print_args(t_format *format, t_conversion *conversion, va_list args);
/*
* * functions in ft_itoa_unintmax
 */
size_t  int_len(uintmax_t num, int base);
int     load_base(t_conversion *conversion);
char    *load_base_char(t_conversion *conversion, int base);
char    *ft_itoa_base(uintmax_t num, t_conversion *conversion);
char    *ft_itoa_uintmax(uintmax_t num);
/*
** functions in ft_putnbr_just.c
*/
void    ft_putnbr_right_just(t_format *format, t_conversion *conversion,
        uintmax_t num, char pad);
void    ft_putnbr_left_just(t_format *format, t_conversion *conversion,
        uintmax_t num, char pad);
/*
** functions in non_specifier.c
*/
int     invalid_specifier(t_format *format);
/*
** functions in manage_flags.c
*/
int     check_flags(t_format *format, t_conversion *conversion);
void    manage_flags(t_format *format, t_conversion *conversion);
/*
** functions in manage_length.c
*/
void    manage_length(t_format *format, t_conversion *conversion);
/*
** functions in manage_precision.c
*/
void    manage_precision(t_format *format, t_conversion *conversion);
/*
** functions in manage_specifier.c
*/
int     valid_specifier(t_format *format, t_conversion *conversion);
void    manage_specifier(t_format *format, t_conversion *conversion);
/*
** functions in manage_width.c
*/
void    manage_width(t_format *format, t_conversion *conversion);
/*
** fucntions in pf_atoi.c
*/
unsigned int    pf_atoi(t_format *format);
/*
** functions in print_helper.c
*/
void    print_precision(t_format *format, t_conversion *conversion,
        int zero_print, int num_len);
void    print_sign(t_format *format, t_conversion *conversion);
void    print_extra_width(t_format *format, t_conversion *conversion,
        int num_space, char pad);
/*
** functions in print_int.c
*/
void    unsigned_int(t_format *format, t_conversion *conversion,
        va_list args);
void    neg_signt_int(t_format *format, t_conversion *conversion,
        intmax_t num);
void    signed_int(t_format *format, t_conversion *conversion,
        va_list args);
void    print_int(t_format *format, t_conversion *conversion,
        va_list args);
/*
** functions in print_base.c
*/
void    ft_putnbr_base(t_format *format, t_conversion *conversion, uintmax_t num, char pad, int base);
void    check_length(t_format *format, t_conversion *conversion, va_list args, int base);
void    print_base(t_format *format, t_conversion *conversion, va_list args);
/*
** functions in print_string.c
*/
void    print_chars(t_format *format, t_conversion *conversion, char *incoming);
void    print_c(t_format *format, t_conversion *conversion, char incoming);
void    print_string(t_format *format, t_conversion *conversion,
        char *string);
/*
** functions in string_justify.c
*/
void    right_justify(t_format *format, t_conversion *conversion, char *s);
void    left_justify(t_format *format, t_conversion *conversion, char *s);

/*
** function in print_pointer.c
*/
void    print_pointer(t_format *format, t_conversion *conversion, void *pointer);
void    ft_putpnt(t_format *format, t_conversion *conversion, uintmax_t num, char pad, int base);

/*
** functions from libft
*/
void    *ft_memalloc(size_t size);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
char    *ft_strnew(size_t size);
size_t	ft_strlen(const char *s);
char	  *ft_strcpy(char *dst, const char *src);
int	    ft_isdigit(int c);

#endif
