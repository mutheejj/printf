#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (*format)
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
			case 'c':{
				int c = va_arg(args, int);
				_putchar(c);
				i++;
				break;
				 }
			case 's':{
				char *s = va_arg(args, char*);
				int length = 0;
				while (s[length] != '\0')
				{
					_putchar(s[length]);
					length++;
					i++;
				}

				i--;
				break;
				 }
			default:
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}
