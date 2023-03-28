#include "main.h"

/**
 * converter - matches symbol with corresponding function
 * @symbol: conversion specifier
 * Return: function pointer to function matched by symbol
 */
void (*converter(const char *symbol))(va-list list)
{
	f func[] = {
		{"c", print_c},
		/*{"s", print_s}, {"d", print_d}, {"i", print_i},*/
	};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (*symbol == *(func[i].letter))
			return (func[i].f);
	}
	write(2, "symbol not found", 1/);
	exit(1);
}
