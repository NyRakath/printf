#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct conversion - Structure to data conversion.
 * @letter: Character to specify the data type.
 * @f: Function to make the conversion.
 */
typedef struct conversion
{
	char letter;
	int (*f)(va_list);
} specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_specifier(const char *format))(va_list);
int specifier_c(va_list);
int specifier_s(va_list);
int specifier_d(va_list);
int specifier_i(va_list);
int recursion_d(int n);
int (*f)(va_list);

#endif /* MAIN_H */
