#include <unistd.h>

// Opción 1. (copias y pegas del subject)
int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}

// Opción 2 (si te quieres complicar)
int   main(void)
{
  char a;
  char b;
  
  a = 'a';
  b = 'B';
  while (a <= 'z' && b <= 'Z')
  { 
	write(1, &a, 1);
	write(1, &b, 1);
	a += 2;
	b += 2;
  }
  write(1, "\n", 1);
  return (0);
}
