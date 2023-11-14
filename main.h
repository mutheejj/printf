#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
int _printf(const char *format, ...);
char _putchar(char c);
void my_printf(const char *format, va_list args);
int printt(const char *format, ...);
#endif
