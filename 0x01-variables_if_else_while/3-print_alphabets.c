#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cr;

	for (cr = 'a'; cr <= 'z'; cr++)
		putchar(cr);
	for (cr = 'A'; cr <= 'Z'; cr++)
		putchar(cr);
	putchar('\n');
	return (0);
}
