#include <unistd.h>

// Opción 1. (copias y pegas del subject)
int		main(void)
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}

// Opción 2 (si te quieres complicar)
void   ft_putchar(char c)
{
	write(1, &c, 1);
}
 
int    main(void)
{
	char  a;
	char  b;
	
	b = 'z';
	a  = 'Y';
	while (b >= 'a' && a >= 'A')
	{
		ft_putchar(b);
		ft_putchar(a);
		b -= 2;
		a -= 2;
	}
	ft_putchar('\n');
	return (0);
}
