# include "main.h"
# include <string.h>
# include <stdio.h>
# include <ctype.h>

/**
 *_atoi- function that convert a string to an integer
 *@s: input string
 *Return: 0
 */
int _atoi(char *s)
{

	int m;
	int flag =  0;
	int len = strlen(s);

	for (m = 0; m < len; m++)
	{

		if (flag == 1 && s[m] < 48 &&  s[m] > 57)
		{
			break;
		}
		if (s[m] >= 48 &&  s[m] <= 57)
		{
			if (s[m - 1] == 45)
				printf("%c", s[m - 1]);
			printf("%c", s[m]);
			flag = 1;
		}

	}
	printf("\n");

	return  (0);
}
