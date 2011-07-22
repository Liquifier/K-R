/*Write a program to determine the ranges of char, short, int and
	long variables, both signed and unsigned, by printing appropriate 
	values from standard headers and by direct computation.
	Harder if you compute them: determine the ranges of the various 
	floating-point types. */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	unsigned int ui = -1;
	signed int si = ui/2;
	unsigned long ul = -1;
	long l = ul/2;
	unsigned short us = -1;
	short s = us/2;
	unsigned char uc = -1;
	signed char c = uc/2;
	
	printf("Directly computed values are in brackets");
	printf("Char: %d\n", CHAR_BIT);
	
	printf("Char Max size: %d\n", CHAR_MAX); 
	/* Char is 8 bit, so charmax is easily deduced as 2^8 - 1 */
	printf("Char Min: %d\n", CHAR_MIN);
	/* unsigned minimum is 0 */
	
	printf("Int Max signed: %d(%d)\n", INT_MAX, si);
	printf("Int Min signed: %d(%d)\n", INT_MIN, -si-1);
	
	printf("Long Max: %ld(%ld)\n", LONG_MAX, l);
	printf("Long Min: %ld(%ld)\n", LONG_MIN, -l-1);
	
	printf("Short Max: %hd(%hd)\n", SHRT_MAX, s);
	printf("Short Min: %hd(%hd)\n", SHRT_MIN, -s-1);
	
	printf("Char Max unsigned: %u(%u)\n", UCHAR_MAX, uc);
	
	printf("Int Max unsigned: %u(%u)\n", UINT_MAX, ui);
	
	printf("Long Max unsigned: %lu(%lu)\n", ULONG_MAX, ul);
	
	printf("Short Max unsigned: %hu(%hu)\n", USHRT_MAX, us);
	
	
	
	return 0;
}
	