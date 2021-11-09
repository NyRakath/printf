#include "main.h"
/**
 * specifier_d - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_d(va_list ap)
{
	int digit, rev, d, size = 0;
	int dval = va_arg(ap, int);

	if (dval < 0)
	{
		size += _putchar('-');
		digit = ('0' - (dval % 10));
		dval /= -10;
	}
	else
	{
		digit = ((dval % 10) + '0');
		dval /= 10;
	}
	rev = 0;
	for (; dval > 0;)
	{
		rev = ((rev * 10) + (dval % 10));
		dval /= 10;
	}
	for (; rev > 0;)
	{
		d = ((rev % 10) + '0');
		size += _putchar(d);
		rev /= 10;
	}
	size += _putchar(digit);

	return (size);
}
/**
 * specifier_i - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_i(va_list ap)
{
	int size = 0;
	int dval = va_arg(ap, int);

	size = recursion_d(dval);
	return (size);
}
