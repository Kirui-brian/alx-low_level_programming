#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: The number to return the factorial from.
 *
 * Return: Thhe factorial of n.
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
