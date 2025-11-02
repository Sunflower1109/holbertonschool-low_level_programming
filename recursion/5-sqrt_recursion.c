#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
  * Return: natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	int guess = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	while (guess * guess <= n)
	{
		if (guess * guess == n)
			return (guess);
		guess++;
	}

	return (-1);
}
