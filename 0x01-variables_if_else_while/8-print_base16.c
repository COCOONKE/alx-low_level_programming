#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print number of base 16'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char low;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (low = 'a' ; low <= 'f' ; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
