#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
