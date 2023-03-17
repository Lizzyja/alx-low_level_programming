#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all simgle digits number of base 10
 * starting from 0, followed by a new line
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
