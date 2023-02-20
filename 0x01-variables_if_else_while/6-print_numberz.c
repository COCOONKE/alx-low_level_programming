#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print single digit numbers using putchar'
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
