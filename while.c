#include "main.h"

void my_printf(const char *format, va_list args)
{
int i = 0;

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
		switch (*format){
			case 'r':{
					 int r = va_arg(args, int);
					 _putchar(r);
					 i++;
					 break;
				 }
			case 'd':{
					 int d = va_arg(args, int);
					 print_num(d);
					 i++;
					 break;
				 }
			case 'i':{
					 int i = va_arg(args, int);
					  _putchar(i);
					  i++;
					  break;
				 }
			default:
				 break;
		}
	}
	format++;
}
}
