#include "main.h"
#include <stdlib.h>

/**
 * _printf - function that prints anything
 * @format: string literal
 */

int _printf(const char *format, ...)
{
	/*arg1 - char, arg2 - string, arg3 - int*/
	va_list arg1, arg2;

	int i;
	char *s = NULL;
	char *arg; /*for adding characters after replacing with an argument*/

	arg = va_arg(arg1, char *);
	if (*format == '\0')
		return (-1);

	va_start(arg1, format); /*checks for c*/

		for (i = 0; format[i] != '\0'; i++)
		{
				/*checks for percentange*/
			if (format[i] == '%' && format[i + 1] == ' ')
			{
				continue;
			}
			else if (format[i] == '%' && format[i + 1] == 'c')
			{
				*s = *add_char(format, "c", arg);
			}
		}
	va_end(arg1);

	va_start(arg2,format);
	va_copy(arg2,arg1);
	
	arg = va_arg(arg2, char *);
		 if (format[i] == '%' && format[i + 1] == 's')
		 {
			 *s = *add_char(format, "s", arg);
		 }
	va_end(arg2);
	for (i=0; s[i] != '\0'; i++)
	{
		_putchar(*s);
	}
	return (0);
	
}

char *add_char(const char *c,char *specifier, char *arg)
{
	int i, j;
	char *s = '\0';

	char *newstring = malloc(sizeof(c) + sizeof(arg) - 2);
	/*allocate size where the string will be saved*/

	*newstring = *c;
	/*put format to newstring to allow being edited*/

	for (i = 0; c[i] != '\0'; i++)
	/*check if string has format again to change*/
	{
		if (c[i] == '%' && c[i + 1] == *specifier)/*replaces format with variable*/
		{
			for(j = 0; arg[j] != '\0'; j++)
			{
				*s = *newstring;
				newstring[i] = *arg;

			}
			while (newstring[i + 1] != '\0')
			{
				newstring [i + 1] = s[i];
				i++;
			}
		}
	}
	return (newstring);
}
