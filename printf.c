#include "main.h"
#include <stdlib.h>

/**
 * _printf - function that prints anything
 * @format: string literal
 */

int _printf(const char *format, ...)
{
	va_list arg1;

	int i;
	char *s = NULL;
	char arg; /*for adding characters after replacing with an argument*/

	arg = va_arg(arg1, int);
	if (*format == '\0')
		return (-1);

	va_start(arg1, format); /*checks for c*/

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] == ' ')
			{
				continue;
			}
			else if (format[i] == '%' && format[i + 1] == 'c')
			{
				*s = add_char(format, 'c', arg);
			}
		}
	va_end(arg1), return (0);
}

char *add_char(char *c, char *specifier, char *arg)
{
	int i;
	char *s = '\0';

	char *newstring = malloc(sizeof(format) + sizeof(arg1) - 2);
	/*allocate size where the string will be saved*/

	*newstring = *format;
	/*put format to newstring to allow being edited*/

	for (i = 0; format[i] != '\0'; i++)
	/*check if string has format again to change*/
	{
		if (format[i] == '%' && format[i + 1] == 'c')/*replaces format with variable*/
		{       
			*s = *newstring;
			newstring[i] = arg;

			while (newstring[i + 1] != '\0')
			{
				newstring [i + 1] = s[i];
				i++;
			}
		}
	}
	return (newstring);
}
