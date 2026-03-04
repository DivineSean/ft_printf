#include "ft_printf.h"

int	main(void)
{
	ft_printf("--- ft_printf test ---\n");

	ft_printf("char:    %c\n", 'A');
	ft_printf("string:  %s\n", "hello world");
	ft_printf("int:     %d\n", -42);
	ft_printf("int:     %i\n", 42);
	ft_printf("uint:    %u\n", 3000000000u);
	ft_printf("hex low: %x\n", 255);
	ft_printf("hex up:  %X\n", 255);
	ft_printf("pointer: %p\n", (void *)main);
	ft_printf("percent: 100%%\n");

	return (0);
}
