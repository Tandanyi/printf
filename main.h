#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct formatter
{
	char * symbol;
	void (*f)(char *);
}f;

void (*converter(const char *))(va_list list);

/******function for specifiers******/
void print_char(va_list list);
void print_string(va_list list);
void print_d(va_list list);
void print_i(va_list list);

#endif
