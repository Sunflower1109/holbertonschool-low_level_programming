#include "main.h"

/**
 * _is_prime_helper - checks if n is divisible by any number starting from i
 * @n: number to check
 * @i: current divisor
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i >= n) /* reached n, no divisors found */
		return (1);
	if (n % i == 0) /* divisible → not prime */
		return (0);
	return (_is_prime_helper(n, i + 1)); /* try next divisor */
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* numbers <=1 are not prime */
		return (0);
	return (_is_prime_helper(n, 2)); /* start checking from 2 */
}
