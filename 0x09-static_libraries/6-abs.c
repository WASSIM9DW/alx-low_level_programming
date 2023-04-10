#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @a: parameter to be checked
 *
 * Return: always a
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
