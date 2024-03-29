#include "main.h"

/**
 * _sqrt_recursion - A function that returns
 *  the natural square root of a number.
 *
 *  @n: The number to calculate the square root of.
 *
 *  Return: The square root result.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (nat_sqrt_recursion(n, 0));
}

/**
 * nat_sqrt_recursion - Performs recursion to find
 * the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 * @i: The iterator.
 *
 * Return: The square root result.
 */

int nat_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (nat_sqrt_recursion(n, i + 1));
}
