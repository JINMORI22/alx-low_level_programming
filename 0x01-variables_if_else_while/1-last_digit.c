#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

        	int n, last_digit;

	        srand(time(0));
	        n = rand() - RAND_MAX / 2;
          last_digit = n % 10;
          printf("The last digit of %d is %d", n, last_digit);
          if (last_digit > 5)
          {
            printf("greater than 5\n");
          }
          else if (last_digit > 5)
          {
            printf("less than 6 and not 0");
          }
          else if (last_digit == 0)
          {
            printf("0\n");
          }
          
return 0;
}
