#include <stdio.h>

/**
 * main - all numbers of base 16 in
 * lowercase
 * Return: o Success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
