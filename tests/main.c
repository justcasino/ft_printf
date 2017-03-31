/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:45:43 by jcasino           #+#    #+#             */
/*   Updated: 2017/03/20 00:36:54 by jcasino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

int main(void)
{

    printf("%-18s: <%zd> <%zd>\n","printf %s ", 0, 42);
    ft_printf("%-18s: <%zd> <%zd> \n","ft_printf %s ", 0, 42);

/*  printf("%-18s: <%s> \n","printf %s ", NULL);
    ft_printf("%-18s: <%s> \n","ft_printf %s ", NULL);
    printf("%-18s: <%s> \n","printf %s ", "Test String");
    ft_printf("%-18s: <%s> \n", "ft_printf %s ", "Test String");
    printf("%-18s: <%s> \n","printf %0s", "error");
    ft_printf("%-18s: <%s> \n","ft_printf %0s", "error");
    printf("%-18s: <%5s> \n","printf %5s", "Test String");
    ft_printf("%-18s: <%5s> \n","ft_printf %5s", "Test String");
    printf("%-18s: <%-5s> \n","printf %-5s", "Test String");
    ft_printf("%-18s: <%-5s> \n","ft_printf %-5s", "Test String");
    printf("%-18s: <%-15s> \n","printf %-15s", "Test String");
    ft_printf("%-18s: <%-15s> \n","ft_printf %-15s", "Test String");
    printf("%-18s: <%15s> \n","printf %15s", "Test String");
    ft_printf("%-18s: <%15s> \n","ft_printf %15s", "Test String");
    printf("%-18s: <%25s> \n","printf %25s", "Test String");
    ft_printf("%-18s: <%25s> \n","ft_printf %25s", "Test String");
    printf("%-18s: <%s> \n", "printf %+s", "error");
    ft_printf("%-18s: <%s> \n", "ft_printf %+s", "error");
    printf("%-18s: <%.10s> \n","printf %.10s", "Test String");
    ft_printf("%-18s: <%.10s> \n","ft_printf %.10s", "Test String");
    printf("%-18s: <%-.25s> \n", "printf %-.25s", "Test String");
    ft_printf("%-18s: <%-.25s> \n", "ft_printf %-.25s", "Test String");
    printf("%-18s: <%.15s> \n","printf %.15s", "Test String");
    ft_printf("%-18s: <%.15s> \n","ft_printf %.15s", "Test String"); */
    return (0);
}
