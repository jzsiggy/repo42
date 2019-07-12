
#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		main(void)
{
	char a;
	int *ptr;

	a = 1;
/*	ptr = &a;
	ptintf(a);
	ft_putchar('\n');
	printf(ptr);
	ft_putchar('\n');*/
	printf("%s", &a);
	return(0);
}
