#include "main.h"
/**
* print_num - prints a number
* @n: int to be printed
*/
void print_num(int n)
{
	int rem;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n > 0)
	{
		rem = n % 10;
		_putchar(rem + '0');
		n = n / 10;
	}
}
