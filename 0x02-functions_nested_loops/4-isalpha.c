#include "main.h"

/**
 * _isalpha - Check desc
 * Desc: function that checks for alphabetic character
 * @c: The character to be checked.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
