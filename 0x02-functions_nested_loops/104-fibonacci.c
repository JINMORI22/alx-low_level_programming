#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void fibonacci_sequence(int n)
{
unsigned long long fib_sequence[98];
		fib_sequence[0] = 1;
		fib_sequence[1] = 2;
	for (int i = 2; i < n; i++)
	{
		fib_sequence[i] = fib_sequence[i-1] + fib_sequence[i-2];
	}
	for (int i = 0; i < n-1; i++)
	{
		printf("%llu, ", fib_sequence[i]);
	}
		printf("%llu\n", fib_sequence[n-1]);
}
int main(void)
{
	fibonacci_sequence(98);
return (0);
}
