#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, a = 1, b = 2, sum = 0;

	for (n = 1; n < 50; n++)
	{
		printf("%ld, ", a);
		sum = a + b;
		a = b;
		b = sum;
		if (n == 49)
		{
			printf("%ld\n", a);
		}
	}
	return (0);
}
