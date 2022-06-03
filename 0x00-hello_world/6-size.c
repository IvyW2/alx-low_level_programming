#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char cchar;
	int iint;
	long llong;
	long long lllong;
	float ffloat;

	printf("size of a char: %lu byte(s)\n", sizeof(cchar));
	printf("size of an int: %lu byte(s)\n", sizeof(iint));
	printf("size of an long int: %lu byte(s)\n", sizeof(llong));
	printf("size of a long long int: %lu byte(s)\n", sizeof(lllong));
	printf("size of a float: %lu byte(s)\n", sizeof(ffloat));

	return (0);
}
