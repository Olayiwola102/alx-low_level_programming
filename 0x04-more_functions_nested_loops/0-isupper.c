#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c : to check and return
 * Return : 1 if c isupper case or return 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
