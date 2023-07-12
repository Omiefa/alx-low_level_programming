#include "main.h"
#include <stdlib.h>

/**
  *_strdup- returns a pointer to a newly allocated space in memory
  *@str: input string
  *Return: NULL if str = NULL || insufficient memory
  **/

char *_strdup(char *str)
{
	char *ptString;
	int i;

	int str_length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		/* count length of a given string */
		while (str[str_length] != '\0')
		{
			str_length++;
		}

		/* Allocate memory using malloc */
		ptString = malloc(str_length * sizeof(char) + 1);

		if (ptString == NULL)
		{
			return (NULL);
		}

		/* copy the given string to a new location */
		for (i = 0; i < str_length; i++)
		{
			ptString[i] = str[i];
		}
		ptString[i] = '\0';
	}

	return (ptString);
}
