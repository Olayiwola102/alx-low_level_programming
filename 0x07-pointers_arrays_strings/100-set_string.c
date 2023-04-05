#include "main.h"
#include <stdio.h>
/**
 * set_string - set a value of pointer to qachar
 * @s: pointer pointing toa pointer
 * @to: pointer of char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
