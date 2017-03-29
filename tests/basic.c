
#include <stdio.h>
#include "../includes/ft_printf.h"

int main(void)
{
    int i;
    int j;

    i =  ft_printf("%#8x\n", 42);
    j =  printf("%#8x\n", 42);
    ft_printf("%d %#8x\n", i, 42);
    printf("%d %#8x\n",j, 42);

    return (0);
}
