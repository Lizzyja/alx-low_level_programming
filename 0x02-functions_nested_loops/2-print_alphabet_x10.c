#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet ×10 times
 * Return: void
 */
void print_alphabet_x1(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
