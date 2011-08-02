/* Write a function rightrot(x,n) that returns the value of the integer x
 * rotated to the right by n positions.
 */
 
#include <stdio.h>
#define BITS 32 /* assume unsigned int is 32 bits*/

unsigned int rightrot(unsigned int x, int n)
{
	
	return (x >> n) | (x << (BITS - n));
}

int main()
{
	unsigned int x = 2;
	int n = 1;
	
	printf("Rotate %u to the right by %d place(s) is %u\n", x, n, rightrot(x,n));
	
	return 0;
	
}