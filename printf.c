#include "main.h"
/**
 * _printf - prints
 * @format : string literal
 * return (0);
 */

int _printf(const char *format, ...)
{
	int i;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if(format[i] == '%')
		{
			converter(format + ++i)(arg);
		}
		else
		{
			write(1, format +i, 1);
		}
	}
	return (0);
}
