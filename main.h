#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * formatter - A new type describing a formatter.
 * @letter: A conversion specifier.
 * @f: A function pointer to a print function corresponding to letter.
 */
typedef struct formatter
{
	char * letter;
	void (*f)(va_list list);
}f;

void (*converter(const char *i))(va_list list);

/******function for specifiers******/
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);

#endif
