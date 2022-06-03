#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char cchar;
	int iint;
	long llong;
	long long lllong;
	float ffloat;

	printf("size of a char: %zu byte(s)\n", sizeof(cchar));
	printf("size of an int: %zu byte(s)\n", sizeof(iint));
	printf("size of a long int: %zu byte(s)\n", sizeof(llong));
	printf("size of a long long int: %zu byte(s)\n", sizeof(lllong));
	printf("size of a float: %zu byte(s)\n", sizeof(ffloat));

	return (0);
}
