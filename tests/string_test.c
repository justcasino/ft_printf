
//** TEST FILE
//

#include <stdio.h>

int	main(void)
{
//	char *string;

	
	printf("%-14s: <%s> \n","printf %s ", "Test String");
//    ft_printf("%-14s: <%s> \n","printf %s ", "Test String");
	printf("%-14s: <%s> \n","printf %0s", "error");
	printf("%-14s: <%5s> \n","printf %5s", "Test String");
	printf("%-14s: <%-5s> \n","printf %-5s", "Test String");
	printf("%-14s: <%-15s> \n","printf %-15s", "Test String");
	printf("%-14s: <%15s> \n","printf %15s", "Test String");
	printf("%-14s: <%25s> \n","printf %25s", "Test String");
	printf("%-14s: <%s> \n", "printf %+s", "error");
	printf("%-14s: <%.10s> \n","printf %.10s", "Test String");
	printf("%-14s: <%-.25s> \n", "printf %-.25s", "Test String");
	printf("%-14s: <%.15s> \n","printf %.15s", "Test String");
	printf("%-14s: <%s> \n","printf %#s", "error");
	printf("%-14s: <%s> \n", "printf %.A", "error");
	printf("%-14s: <%s> \n", "printf %A", "error");
	return (0);
}
