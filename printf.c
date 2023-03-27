#include "main.h"
#include <stdlib.h>

/**
 * _printf - function that prints anything
 * @format: string literal
 */

int _printf(const char *format, ...)
{
	int i;
	char *s; /*for adding characters after replacing with an argument*/

	if (format == NULL)
		return (-1);
	va_list arg1;

	va_start(arg1,format); /*checks for c*/

		for (i = 0; format[i] != NULL; i++)
		{
			if (format[i] == '%' && format[i+1] == ' ')
			{
				continue;
			}
			else if (format[i] == '%' && format[i+1] == 'c')
			{	char *newstring = malloc(sizeof(format) + sizeof(arg1) -2);

				newstring = *format;

					for (i = 0; format[i] != NULL; i++)
					{
						if (format[i] == '%' && format[i + 1] == 'c')
						{	*s = newstring;
							newstring[i] = arg1;
							while (newstring[i + 1] != NULL)
							{
								newstring [i + 1] = s[i];
								i++;
							}
							va_arg(arg1, char);
						}
					}
			}
		}
	va_end(arg1);

}
