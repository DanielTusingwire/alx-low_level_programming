#include <stdio.h>

/**
 * main - prints the alphabet A-Z in lowercase,
 * then new line
 * return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
