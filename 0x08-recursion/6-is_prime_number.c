#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @a: integer parameter
 * @b: integer parameter
 * Return: boolean
 */

int divisors(int a, int b)
{
	if (b % a == 0)
	{
		return (0);
	}
	else if (b / 2 > a)
	{
		return (divisors(a + 2, b));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @a: integer params
 * Return: recursion
 */

int is_prime_number(int a)
{
	if ((!(a % 2) && a != 2) || a < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, a));
	}
}
