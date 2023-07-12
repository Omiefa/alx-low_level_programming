#include "main.h"
#include <stdlib.h>
/**
  *str_concat- Write a function that concatenates two strings
  *@s1: input string
  *@s2: input strint
  *Return: pointer that points to a newly allocated space in memory
  **/
char *str_concat(char *s1, char *s2)
{
	char *ptr_cat;
	int i, j, total_str_len;
	int s1_length = 0;
	int s2_length = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[s1_length] != '\0')/* counts the length of s1 */
	{
		s1_length++;
	}
	while (s2[s2_length] != '\0')/* counts the length of s2 */
	{
		s2_length++;
	}
	total_str_len = s1_length + s2_length;

	/* allocate memory using malloc including '\0'*/
	ptr_cat = malloc(total_str_len * sizeof(char) + 1);

	if (ptr_cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)/*copy s1 to ptr_cat */
	{
		ptr_cat[i] = s1[i];
	}
	for (j = 0; j < s2_length; j++)/*copy s2 into ptr_cat */
	{
		ptr_cat[s1_length + j] = s2[j];
	}
	ptr_cat[total_str_len] = '\0';
	return (ptr_cat);
}
