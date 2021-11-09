#include "main.h"
/**
 * recursion_d - Takes all numbers of an argument to print
 * @n: Number argument.
 * Return: 0 on success.
 */
int recursion_d(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		recursion_d(n / 10);
	_putchar(n % 10 + '0');
	return (n);
}
/**
 * specifier_d - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_d(va_list ap)
{
	int dval = va_arg(ap, int);

	return (recursion_d(dval));
}
/**
 * specifier_i - Convert the argument into integers.
 * @ap: Pointer to the list of arguments to print.
 * Return: 0 on success.
 */
int specifier_i(va_list ap)
{
	int dval = va_arg(ap, int);

	return (recursion_d(dval));
}
