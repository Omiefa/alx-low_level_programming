#include <stdlib.h> 
#include <time.h> 
/* more headers goes there */ 
  
/* betty style doc for function main goes there */ 
int main(void) 
{
	int n; 
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0) {
		
		printf("Number is Negative\n");
	}

	else if (n > 0 ) {
	
		printf("Number is Positive\n");
	
	}

	else {

		printf("Number is Zero\n");
	
	}

	return (0);
}
