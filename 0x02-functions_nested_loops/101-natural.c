#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints the sum of all multiples of 5 and 3 below 1024
 *
 *Return: zero(success)
 *
 */
int main(void)
{
	int a;
	int tt_sum;

	tt_sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			tt_sum = tt_sum + a;
		}
	}
	printf("%d\n", tt_sum);
	return (0);
}
