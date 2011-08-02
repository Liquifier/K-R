/* Rewrite the function lower, which converts upper case letters to lower case.
 * with a conditional expression instead of if-else.
 */
 
/* lower: convert c to lower case; ASCII only */
/*
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
*/

#include <stdio.h>

int lower(int c)
{
	d = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
	return d;
}

