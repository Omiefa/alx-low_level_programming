#include "main.h"
#include <stdlib.h>

/**
 *_strlen- returns the length of a string
 *@s: a string variable
 *Return: 0
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
		x++;

	return (x);
}

/**
  *string_nconcat- Write a function that concatenates two strings
  *@s1: input string
  *@s2: input string
  *@n: number of bytes to concat from s2
  *Return: pointer that points to a newly allocated space in memory
  **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_cat;
	int num, index_s1, index_s2, total_str_len;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	total_str_len = _strlen(s1) + num + 1;

	/* allocate memory using malloc including '\0'*/
	ptr_cat = malloc(total_str_len * sizeof(char));

	if (ptr_cat == NULL)
	{
		return (NULL);
	}
	for (index_s1 = 0; index_s1 < s1[index_s1]; index_s1++)/*copy s1 to ptr_cat */
	{
		ptr_cat[index_s1] = s1[index_s1];
	}
	for (index_s2 = 0; index_s2 < num; index_s2++)/*copy s2 into ptr_cat */
	{
		ptr_cat[index_s1 + index_s2] = s2[index_s2];
	}
	ptr_cat[index_s1 + index_s2] = '\0';
	return (ptr_cat);
}
