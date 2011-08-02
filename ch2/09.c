/* In a two's complement number system , x &= (x-1) deletes the rightmost 1-bit
 * in x. Explain why. Use this observation to write a faster version of bitcount.
*/
 
/*bitcount: count 1 bits in x */
/* int bitcount(unsigned x)
 {
	int b;
	
	for (b = 0; x != 0; x >>= 1)
		if (x & 01) 
			b++;
	return b;
 }
*/

/* This is because of the way two's complement binary numbers are represented
 ie. 1 = 0001, 2 = 0010, 3 = 0100, 4 = 0101 etc 
 so if we have 2 &= (2-1), we get the binary represention of 1 etc
 */

#include <stdio.h>

int bitcount(unsigned x)
{
	int b = 0;
	
	while (x > 0) {
		if (x &= (x-1)) /* This statement will decrement x as desired */
			b++;
		}
	if (x == 0) { 
		if (b>0)
			b++; /* only add 1 to b if x was non-zero in the first place */
		}
	return b;
}

int main()
{
	unsigned x = 255; /* 11111111 */
	
	printf("Derp\n");
	printf("%u has %d one(s) in its binary representation. \n", x, bitcount(x));
	
	
	return 0;
}
			
	