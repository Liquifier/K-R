/* Write a version of itoa that accepts three arguments instead of two. The third
 * argument is a minimum field width; the converted number must be padded with
 * blanks on the left if necessary to make it wide enough.
 */
 
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAXLINE 1000

void itoa(int n, char s[], int w);
void reverse(char s[]);

int main()
{
	char s[MAXLINE];
	int w = 15;
	
	itoa(INT_MIN, s,w);
	printf("%d converted to char is %s\n", INT_MIN, s);
	
	return 0;
}

/* itoa: convert n to characters in s*/
void itoa(int n, char s[], int w)
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
	while (i < w)
		s[i++] = ' ';
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