#include "main.h"

/**
 * _sqrt_helper - checks for the natural square root recursively
 * @n: number to find square root of
 * @guess: current guess
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}
