/* Write a function rightrot(x,n) that returns the value of the integer x
 * rotated to the right by n positions.
 */
 
#include <stdio.h>
#define ARCHIT 32 /* Assume unsigned int has 32 bits */

unsigned int rightrot(unsigned int x, int n)
{
	return (x >> n) | (x << (ARCHIT - n));
}

