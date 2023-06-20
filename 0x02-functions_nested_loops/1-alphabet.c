#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void printAlphabet()
{
char letter = 'a';
while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}

	_putchar('\n');
}
int main(void)
{
	printAlphabet();
return (0);
}
