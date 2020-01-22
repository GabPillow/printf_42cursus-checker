#include <stdio.h>
#include "ft_printf/ft_printf.h"

int main()
{
	int ret;
	char	*buff;
/*
	ret = ft_printf("{%s}\n", 0);
	printf("F[%d]\n", ret);
	ret = printf("{%s}\n", 0);
	printf("V[%d]", ret);
*/
	ft_printf("test %c %s test|||%d\n", 0, "ton pere suce des bites en enfer", 42);
}
