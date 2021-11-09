#include "main.h"
/**
 * specifier_c - Convert the argument into a char
 * @ap: Pointer to the list of arguments.
 * Return: 1 on success.
 */
int specifier_c(va_list ap)
{
	int length = 0;
	char cval = va_arg(ap, int);

	_putchar((char)va_arg(ap, int));
	length++;
	return (length);
}
/**
 * specifier_s - Convert the argument into a string.
 * @ap: Pointer to the list of arguments.
 * Return: 0 on success.
 */
int specifier_s(va_list ap)
{
	int length = 0;
	char *sval = va_arg(ap, char *);

	if (sval == NULL)
		sval = "(null)";
	for (; *sval; sval++)
	{
		_putchar(*sval);
		length++;
	}
	return (length);
}
