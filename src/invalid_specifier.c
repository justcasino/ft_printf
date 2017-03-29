/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_specifier.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:19:56 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/13 18:49:50 by jcasino          ###   ########.fr       */
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
