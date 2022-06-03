#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cchar;
	int iint;
	long llong;
	long long ll_long;
	float ffloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(cchar));
	printf("Size of an int: %lu byte(s)\n", sizeof(iint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(llong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll_long));
	printf("Size of a float: %lu byte(s)\n", sizeof(ffloat));

	return (0);
}
