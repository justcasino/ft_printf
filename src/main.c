#include <stdio.h>

int main()
{
    int *b;
    int a;

    a = 3;
    b = &a;
    printf("%5p\n", b);
    printf("%5d\n", a);
    printf("%c", 'a');
}
