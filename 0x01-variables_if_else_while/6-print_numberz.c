#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int number = 0;
while (number < 10)
{
putchar('0' + number++);
}
putchar('\n');
return (0);
}
