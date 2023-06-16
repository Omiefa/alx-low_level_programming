#include <stdlib.h>
#include <time.h>
/*more headers goes there*/

/*betty style doc for function main goes there */
/**
 *  main - determines number type
 *
 *  Return: 0 if successful else 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("Number is Negative\n");
	}

	else if (n > 0)
	{

		printf("Number is Positive\n");

	}

	else
	{

		printf("Number is Zero\n");

	}

	return (0);

