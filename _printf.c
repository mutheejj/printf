#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	char ptr[1024];
	int i = 0;
	va_list args;
	va_start(args, format);
	
	if (*format == '\0')
	{
		return (0);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			ptr[i++] = *format;
			format++;
			switch (*format)
			{
			case 'c':
				ptr[i++] = (char)va_arg(args, int);
				break;
			case 's':
				ptr[i++] = (char)va_arg(args, int);
				break;
			default:
				ptr[i++] = (char)va_arg(args, int);
				break;
		}
		}
		else
		{
			ptr[i++] = *format;
		}
		format++;
	}
	va_end(args);
	printf("%s", ptr);
	return (0);
}
