#include "main.h"
/**
 * _printf - is a function
 * @format: is a format
 * Return: number
 */
int print_char(va_list args, int i)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (i + 1);
}


int print_str(va_list args, int i)
{
	char *s = va_arg(args, char*);
	int length = 0;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
		i++;
	}
	return (i);
}

int print_int(va_list args, int i)
{
	int num = va_arg(args, int);
	int temp = num;

	if (num < 0)
	{
		_putchar('-');
		i++;
		temp = -num;
	}
	if (temp / 10 != 0)
		i = print_int(args, i);

	_putchar(temp % 10 + '0');
	return (i + 1);
}

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
		}
		else {
			format++;
			switch (*format){	
			case 'c':{
				i = print_char(args, i);
				break;
				 }
			case 's':{
				i = print_str(args, i);
				break;
				 }
			case 'd':
			case 'i':{
				 i = print_int(args, i);
				 break;
				 }
				 
			default:
				 _putchar(*format);
				i++;
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}
