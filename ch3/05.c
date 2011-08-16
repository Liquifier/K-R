/* Write a function itob(n,s,b) that converts the integer n into a base b
 * character representation in a string s. In particular, itob(n,s,16) formats
 * s as a hexadecimal integer in s.
 */

#include <stdio.h>
#include <string.h>
#include <limits.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main()
{
	char s[11];
	
	itob(10995, s, 16);
	printf("%d converted to char is %s\n", 10995, s);
	
	return 0;
}

/* itob: convert n to characters in s*/
void itob(int n, char s[], int b)
{
	int i = 0;
	int d;
		
	do { /*generate digits in reverse order */
		d = n % b; /* get next digit */
		if (d < 10)
			s[i++] = d + '0';
		else
			s[i++] = d + 'A' - 10; /* 10 + 55 = 65 = 'A' */
	} while ((n = (n-d)/b) > 0); /* delete it */
	
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