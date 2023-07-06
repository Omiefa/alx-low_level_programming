#include "main.h"

/**
 * _strlen_recursion - to get the string length
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_str - compare each character of the string
 * @s: string
 * @le: smallest iterator
 * @ri: largest iterator
 * Return: int
 */
int compare_str(char *s, int le, int ri)
{
	if (*(s + le) == *(s + ri))
	{
		if (le == ri || le == ri + 1)
			return (1);
		return (0 + compare_str(s, le + 1, ri - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome
 *
 * @s: the string to test
 *
 * Return: 1 if it is a pali...., 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, _strlen_recursion(s) - 1));
}
