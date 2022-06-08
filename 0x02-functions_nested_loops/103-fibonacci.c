#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, p = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = n + p;
		n = p;
		p = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
