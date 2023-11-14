#include "main.h"
/**
 */
int printt(const char *format, ...)
{
	int i = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);

	while (*format != '\0')
	{
		if(*format != '%')
		{
			_putchar(*format);
			i++;
		}
		else {
			format++;
			switch (*format) {
				case 'd': {
						  int d = va_arg(args, int);
						  _putchar(d);
						  i++;
						  break;
					  }
				case 'i': {
						  int num = va_arg(args, int);
						  _putchar(num);
						  i++;
						  break;
					  }
				case 'r': {
						  int r = va_arg(args, int);
						  printf("%d", r);
						  i++;
						  break;
					  }
				default: {
					  _putchar('%');
					  _putchar(*format);
					  i += 2;
					  break;
					 }
			}
		}
		format++;
	}
	va_end(args);
	return(i);
}
