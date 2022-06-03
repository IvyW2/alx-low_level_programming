#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char cr = 'a';

	while (cr <= 'z')
	{
		if (cr != 'e' && cr != 'q')
		{
			putchar(cr);
		}
		cr++;
	}
	putchar('\n');
	return (0);
}
