#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Input a number:");
	scanf("%d", &n);
	if (n >= 0)
	{
		printf("%d is a positive number \n", n);
	}
	else
		printf("%d is a nagative number \n", n);
	return (0);
}
