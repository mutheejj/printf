#include "main.h"
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

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
		}
		else {
			format++;
			switch (*format){
<<<<<<< HEAD
			case 'r':{
				char *s = va_arg(args, char*);
				int length = 0;
				while (s[length] != '\0')
				{
					_putchar(s[length]);
					length++;
					i++;
				}
=======
			case 'r': {
				int r = va_arg(args, int);
				_putchar(r);
				i++;
>>>>>>> 32f0c0add66882f285013fecd9741882d08c3583
				break;
				 }
			case 'c':{
				char c = va_arg(args, int);

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
<<<<<<< HEAD
=======
	my_printf(format, args);
	_printf(format, args);
>>>>>>> 32f0c0add66882f285013fecd9741882d08c3583
	va_end(args);
	return (i);
}
