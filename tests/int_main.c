/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 12:49:28 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/19 17:07:09 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

int	main(void)
{
    ft_printf("%-20s: <%d> \n", "ft_printf %d ", -123456789);
    printf("%-20s: <%d> \n", "printf %d ", -123456789);
    printf("%-20s:  <%d> \n", "printf %d ", -123456789);
    ft_printf("%-20s:  <%d> \n", "ft_printf %d ", -123456789);
	printf("%-20s:  <%15d> \n", "printf %15d ", -123456789);
    ft_printf("%-20s:  <%15d> \n", "ft_printf %15d ", -123456789);
	printf("%-20s:  <%-d> \n", "printf %-d ", -123456789);
    ft_printf("%-20s:  <%-d> \n", "ft_printf %-d ", -123456789);
	printf("%-20s:  <%-15d> \n", "printf %-15d ", -123456789);
    ft_printf("%-20s:  <%-15d> \n", "ft_printf %-15d ", -123456789);
	printf("%-20s:  <%+d> \n", "fprintf %+d ", -123456789);
    ft_printf("%-20s:  <%+d> \n", "ft_printf %+d ", -123456789);
	printf("%-20s:  <%+15d> \n", "printf %+15d ", 123456789);
    ft_printf("%-20s:  <%+15d> \n", "ft_printf %+15d ", 123456789);
	printf("%-20s:  <%+d> \n", "printf %+d ", -123456789);
    ft_printf("%-20s:  <%+d> \n", "ft_printf %+d ", -123456789);
	printf("%-20s:  <%015d> \n", "printf %015d ",-123456789);
    ft_printf("%-20s:  <%015d> \n", "ft_printf %015d ",-123456789);
	printf("%-20s:  <%5d> \n", "printf %5d ", -123456789);
    ft_printf("%-20s:  <%5d> \n", "ft_printf %5d ", -123456789);
	printf("%-20s:  <%.15d> \n", "printf %.15d ", -123456789);
    ft_printf("%-20s:  <%.15d> \n", "ft_printf %.15d ", -123456789);
	printf("%-20s:  <%15d> \n", "printf %15d ", -123456789);
    ft_printf("%-20s:  <%15d> \n", "ft_printf %15d ", -123456789);
	printf("%-20s:  <%+.15d> \n", "printf %+.15d ", 123456789);
    ft_printf("%-20s:  <%+.15d> \n", "ft_printf %+.15d ", 123456789);
	printf("%-20s:  <%20.15d> \n", "printf %20.15d ", -123456789);
    ft_printf("%-20s:  <%20.15d> \n", "ft_printf %20.15d ", -123456789);
    printf("%-20s:  <%-20.15d> \n", "printf %-20.15d ", -123456789);
    ft_printf("%-20s:  <%-20.15d> \n", "ft_printf %-20.15d ", -123456789);
    printf("%-20s:  <% 15d> \n", "printf % 15d ", -123456789);
    ft_printf("%-20s:  <% 15d> \n", "ft_printf % 15d ", -123456789);
    printf("%-20s:  <% 15d> \n", "printf % 15d ", 123456789);
    ft_printf("%-20s:  <% 15d> \n", "ft_printf % 15d ", 123456789);
    printf("%-20s:  <% 9d> \n", "printf % 9d ", 123456789);
    ft_printf("%-20s:  <% 9d> \n", "ft_printf % 9d ", 123456789);
    printf("%-20s:  <% .10d> \n", "printf % .10d ", 123456789);
    ft_printf("%-20s:  <% .10d> \n", "ft_printf % .10d ", 123456789);
    printf("%-20s:  <%10.20d> \n", "printf %10.20d ", 123456789);
    ft_printf("%-20s:  <%10.20d> \n", "ft_printf %10.20d ", 123456789);
    printf("%-20s:   \n", "printf %-020d print an error");
    ft_printf("%-20s:   \n", "ft_printf %-020d print an error");
    printf("%-20s:   \n", "printf % +.15d print an error");
    ft_printf("%-20s:   \n", "ft_printf % +.15d print an error");
	printf("%-20s:   \n", "printf %20+.15d prints an error");
    ft_printf("%-20s:   \n", "ft_printf %20+.15d prints an error");
	printf("%-20s:   \n", "printf %-015d> prints an error");
    ft_printf("%-20s:   \n", "ft_printf %-015d> prints an error");
	printf("%-20s:   \n", "printf %+ d prints an error");
    ft_printf("%-20s:   \n", "ft_printf %+ d prints an error");
    printf("%-20s:   \n", "printf %+20.15d prints an error");
    ft_printf("%-20s:   \n", "ft_printf %+20.15d prints an error");
	return (0);
}
