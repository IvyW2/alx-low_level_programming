#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */

int main(void)

{
	unsigned long int a, n, p, n1, n2, p1, p2;

	n = 1;
	p = 2;

	printf("%lu", n);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", p);
		p = p + n;
		n = p - n;
	}

	n1 = n / 1000000000;
	n2 = n % 1000000000;
	p1 = p / 1000000000;
	p2 = p % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", p1 + (p2 / 1000000000));
		printf("%lu", p2 % 1000000000);
		p1 = p1 + n1;
		n1 = p1 - n1;
		p2 = p2 + n2;
		n2 = p2 - n2;
	}

	printf("\n");

	return (0);
}
