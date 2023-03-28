#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - print function
 * @format: format
 * Return: print chars
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
=======
	/*arg1 - char, arg2 - string, arg3 - int*/
	va_list arg1, arg2;

	int i;
	char *s = NULL;
	char *arg; /*for adding characters after replacing with an argument*/

	arg = va_arg(arg1, char *);
	if (*format == '\0')
>>>>>>> 9246509cf7ee2d05225410f7fde16a5248a7f2e3
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				printf_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
<<<<<<< HEAD
			print_buffer(buffer, &buff_ind);
			glags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer, flags,
					width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}

/**
 * print_buffer - prints the content of the buffer if it exist
 * @buffler: Array of chars
 * @buff_ind: index
 */
void print buffer(char buffer[], int buff_ind)
{
	if (buff_ind > 0)
		write(1, &buffer[1], *buffer_ind);
	*buff_ind = 0;
=======
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
		_putchar(*s + '\0');
	}
	return (0);
	
}

char *add_char(const char *c,char *specifier, char *arg)
{
	int i, j;
	char *s = NULL;

	char *newstring;

	newstring = malloc(sizeof(c) + sizeof(arg) - 2);
	/*allocate size where the string will be saved*/
	if (newstring == NULL)
	{
		return(NULL);
	}
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
	free(newstring);
	*newstring = '\0';
}
int main(void)
{
	_printf("String:[%s]\n", "I am a string !");
	return 0;
>>>>>>> 9246509cf7ee2d05225410f7fde16a5248a7f2e3
}
