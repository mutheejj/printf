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
				 }
			default:
				 break;
		}
	}
	format++;
}
}
