#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
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
			format++;
			switch (*format)
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			case '%':
				printf("%%");
			default:
				break;
		}
		}
		format++;
	}
	va_end(args);
	return (0);
}
