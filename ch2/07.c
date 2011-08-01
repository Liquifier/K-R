/* Write a function invert(x,p,n) that returns x with the n bits that begin at 
 * position p inverted (i.e., 1 changed into 0 and vice versa), leaving
 * the others unchanged.
*/

#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	return ((x & ~(~(~0 << n) << (p+1-n))) | ((((x >> (p+1-n)) | (~0<<n)) ^ ~0) << (p+1-n)));
	
}

int main()
{
	printf("(x: 255, p: 4, n: 3) %d\n", invert(255, 4, 3));
	printf("(x: 247, p: 4, n: 3) %d\n", invert(247, 4, 3));
	
	return 0;

}