#include "main.h"
/**
 * print_char - prints char
 * @args: list
 * @i: a number
 * Return: i
 */

int print_char(va_list args, int i)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (i + 1);
}

/**
 * print_str - a function
 * @args: a list
 * @i: int
 * Return: i
 */

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

/**
 * print_int - function
 * @args: list
 * @i: int
 * Return: i
 */

int print_int(va_list args, int i)
{
	int num = va_arg(args, int);
	int temp = num;
	int count = 1;

	if (num < 0)
	{
		_putchar('-');
		i++;
		num = -num;
	}

	while (temp / 10 != 0)
	{
		temp /= 10;
		count *= 10;
	}
	temp = num;

	while (count > 0)
	{
		_putchar(temp / count + '0');
		i++;
		temp %= count;
		count /= 10;
	}
	return (i);
}

/**
 * _printf - prints
 * @format: string
 * Return: i
 */

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
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
						i = print_char(args, i);
						break;
				case 's':
						i = print_str(args, i);
						break;
				case 'd':
				case 'i':
						i = print_int(args, i);
						break;
				default:
						break;
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}
