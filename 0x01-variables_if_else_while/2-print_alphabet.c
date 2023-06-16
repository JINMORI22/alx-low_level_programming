#include <stdio.h>

int main(void)
{
  /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}

	putchar('\n');

	return 0;
}
