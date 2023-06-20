#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char string[] = "_putchar\n";
int i = 0;
while (string[i] != '\0')
{
	_putchar(string[i]);
	i++;
}
return (0);
}
