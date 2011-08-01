/* Write a function setbits(x,p,n,y) that returns x with the n bits that
begin at position p set to the rightmost n bits of y, leaving the other
bits unchanged. */

#include <stdio.h>

/*setbits: set n bits from position p, return x */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	
	return ((x & ~(~(~0 << n) << (p+1-n))) | ((~(~0 << n) & y) << (p+1-n))) ;
	
}

int main()
{
	printf("%d", setbits(255, 4, 3, 254));
	
	return 0;

}