
#include <unistd.h>

int		ft_putchar(char ch)
{
	write(1, &ch, 1);
	return(0);
}

int		main(void)
{
	char	*ptr;

	ptr = "toto";
	ft_putchar(ptr[0]);
	return(0);
}
