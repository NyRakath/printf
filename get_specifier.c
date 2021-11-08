#include "main.h"
/**
 * get_specifier - Select the correct operator.
 * @format: operator to compare.
 * Return: pointer with the data specifier.
 */
int (*get_specifier(const char *format))(va_list)
{
	specifiers type[] = {
	    {'c', specifier_c},
	    {'s', specifier_s},
	    {'%', specifier_per},
	    {'d', specifier_d},
	    {'i', specifier_i},
	    {'\0', NULL}};
	int counter = 0;

	while (counter < 5)
	{
		if (*format == type[counter].letter)
			return (type[counter].f);
		counter++;
	}
	return (0);
