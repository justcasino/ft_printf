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

 //   int i;
 //   int j;
  //  int x;
  //  int y;

//    x = 22;
//    y = 24;
 //  i = printf("%p\n",&i);
 //  j = ft_printf("%p\n", &i); 
//     printf(".%%.%%.%%.%%.%%.%%.%%.%%\n");
//     ft_printf(".%%.%%.%%.%%.%%.%%.%%.%%\n");
//    i = printf(".%%.%%.%%.%%.%%.%%.%%.%%.\n");
//    j = ft_printf(".%%.%%.%%.%%.%%.%%.%%.%%.\n");
//   i =  printf ("{%-30S\n}", L"我是一只猫。");
//   j =  ft_printf ("{%-30S\n}", L"我是一只猫。");
 //   printf(".%%.%%.%%.%%.%%.%%.%%.%%.\n");
 //   printf("%d   | |", i);
  //  printf("  %d\n", j);
  //  printf("%d   | |", i);
   // printf("  %d\n", j);
//    printf("%d %d\n", i, j);
 //   printf("%-18s: <%15.4d>\n","printf %15.4d ", 424242);
 //  ft_printf("%-18s: <%15.4d>\n","ft_printf %15.4d ", 424242);

//   printf("%-18s: <%15.4d>\n","printf %15.4d ", -42);
//   ft_printf("%-18s: <%15.4d>\n","ft_printf %15.4d ", -42);
 //   printf("%-18s: <%5p>\n","printf %5p ", 0);
   // ft_printf("%-18s: <%5p>\n","ft_printf %5p ", 0);

//    printf("%-18s: <%3*d> \n","printf %3*d ", 0, 0);
//    ft_printf("%-18s: <%3*d>\n","ft_printf %3*d ", 0, 0);
//      printf("%-18s: <%hhC>, <%hhC>\n", "printf %hhC", 0, L'Á±≥');
//      ft_printf("%-18s: <%hhC>, <%hhC>\n", "ft_printf %hhC", 0, L'Á±≥');
  
//   printf("%-18s: <%03c>\n","printf %03c ", 0);
//   ft_printf("%-18s: <%03c> \n","ft_printf %03c ", 0);

  //   printf(" <%ls>\n", L"Á±≥");
     //printf("%p", 0);
  //  ft_printf("%-18s: <%ls>\n","ft_printf %ls ", L"Á±≥");
//    i = printf("<%%%%%%%%%%>\n");
//    j = ft_printf("<%%%%%%%%%%>\n");
//    write(1, &i, 1);
    ft_printf("%b", 100);
//    printf("%d   | |", i);
//    printf("  %d\n", j);
  //  write(1, "\n", 1);
  //  write(1, &j, 1);
    //ft_printf("%-18s: <%+o\n","ft_printf %+o ", 42);

 // printf("%-18s: <.%%.%%.%%.%%.%%.%%.%%.%%.>\%n","printf .%%.%%.%%.%%.%%.%%.%%.%%.");
    
 // ft_printf("%-18s: <.%%.%%.%%.%%.%%.%%.%%.%%.>\%n","printf .%%.%%.%%.%%.%%.%%.%%.%%.");
 /*  printf("%-18s: <%zd> <%zd>\n","printf %s ", 0, 42);
    ft_printf("%-18s: <%zd> <%zd> \n","ft_printf %s ", 0, 42);

    printf("%-18s: <%zd> <%zd>\n","printf %s ", 0, 42);
    ft_printf("%-18s: <%zd> <%zd> \n","ft_printf %s ", 0, 42);

    printf("%-18s: <%zd> <%zd>\n","printf %s ", 0, 42);
    ft_printf("%-18s: <%zd> <%zd> \n","ft_printf %s ", 0, 42); */

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
