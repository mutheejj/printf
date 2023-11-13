#include "main.h"
#include "while.h"
/**
 * _printf - is a function
 * @format: is a format
 * Return: number
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	my_printf(format, args);
	va_end(args);
	return (i);
}
