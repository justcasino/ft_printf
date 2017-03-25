/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oct_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 17:54:44 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 01:39:22 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

int main()
{
    int a;
    int *b;


    a = 016;
    b = &a;
    printf("********** %s ************\n", "OCTAL");
    printf("%-28s:  = < %d>\n","printf %d var = 016", 016);
    ft_printf("%-28s:  = < %d>\n", " ft_printf %d var = 016", 016);
    printf("%-28s:  = <%o>\n", "printf %o var = 9", 9);
    ft_printf("%-28s:  = <%o>\n", "ft_printf %o var = 9", 9);
    printf("%-28s:  = <%o>\n", "printf %o var = 8", 8);
    ft_printf("%-28s:  = <%o>\n","ft_printf %o var = 8", 8);
    printf("%-28s:  = <%-.25o>\n", "printf %-.25o var = 8000", 8000);
    ft_printf("%-28s:  = <%-.25o>\n", "ft_printf %-.25o var = 8000", 8000);
    printf("%-28s:  = <%o>\n", "printf %o var = 8", 8);
    ft_printf("%-28s:  = <%o>\n", "ft_printf %o var = 8", 8);
    printf("%-28s:  = <%029o>\n", "printf %029o var = 14", 14);
    ft_printf("%-28s:  = <%029o>\n", "ft_printf %029o var = 14", 14);
    ft_printf("%.0o", 0);
    printf("********** %s ************\n", "HEX_LOWER");
    printf("%-28s:  = <%29x>\n", "printf %29x var = 14", 14);
    ft_printf("%-28s:  = <%29x>\n", "ft_printf %29x var = 14", 14);
    printf("%-28s:  = <%-29x>\n", "printf %-29x var = 1000", 1000);
    ft_printf("%-28s:  = <%-29x>\n", "ft_printf %-29x var = 1000", 1000);
    printf("%-28s:  = <%029x>\n", "printf %029x var = 14", 14);
    ft_printf("%-28s:  = <%029x>\n", "ft_printf %029x var = 14", 14);
    printf("********** %s ************\n", "POINTER");
    printf("%-28s:  = <%p>\n", "printf %p var = 14", b);
    ft_printf("%-28s:  = <%p>\n", "ft_printf %p var = 14", b);
    printf("********** %s ************\n", "RETURN VALUE");
    printf("%-28s:  = <%d>\n", "printf %d var = 9000", ft_printf("%d", 9000));

    printf("********** %s ************\n", "CHAR");

    printf("%-28s:  = <%c>\n", "printf %c var = p", 'p');
    ft_printf("%-28s:  = <%c>\n", "printf %c var = p", 'p');
    return (0);
}
