/* In a two's complement number representation, our version of itoa does not 
 * handle the largest negative number, that is, the value of n equal to 
 * -(2^wordsize-1). Explain why not. Modify it to print that value correctly,
 * regardless of that machine on which it runs.
 */

/* Take for example an 8-bit wordlength. The largest negative number would be 
 * -128. However, when we perform n = -n, we get 128, which is 1 more than 
 * the largest positive number, 127. 
 */
 
#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main()
{
	char s[11];
	
	itoa(INT_MIN, s);
	printf("%d converted to char is %s\n", INT_MIN, s);
	
	return 0;
}

/* itoa: convert n to characters in s*/
void itoa(int n, char s[])
{
	int i, sign;
	int negmax = 0;
	
	if (n == INT_MIN) { /*problem with nested if statement*/
		n = (-1) * INT_MAX;
		negmax = 1;
	}	
	if ((sign = n) <0) { /* record sign */

		n = -n;
	}
	i = 0;
	do { /*generate digits in reverse order */
		s[i++] = n % 10 + '0'; /* get next digit */
	} while ((n /= 10) > 0); /* delete it */
	if (negmax) {
		s[0] = '8'; /* numerical value of largest negtive number ends in eight */
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/*reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;
	
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
