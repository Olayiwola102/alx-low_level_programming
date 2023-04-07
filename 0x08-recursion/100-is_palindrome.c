#include "main.h"
#include <string.h>

/**
 * is_palindromes - checking if the number input ids a prime
 * @begin: the beginning of divisor
 * @end: the end of the  divisor
 * Return: return 1 if the string is palindrome
 *	return 0 if not palindrome
 */

int is_palindromes(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] != s[end])
	{
		return (0);
	}
	return (is_palindromes(s, begin + 1, end - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to be checked
 * Return: return 1 if the tring is palindrome
 * return 0 if not palindrome
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_palindromes(s, 0, (len - 1)));
}
