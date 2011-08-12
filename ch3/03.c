/* Write a function expand(s1,s2) that expands shorthand notations like a-z
 * in the string s1 into the equivalent complete list abc...xyz in s2. Allow for
 * letters of either case and digits, and be prepared to handle cases like a-b-c
 * and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally.
*/

#include <stdio.h>
#include <ctype.h>

void expand(char s1[], char s2[]);

int main()
{
	char test1[6] = "a-z";
	char test2[7] = "A-Z0-9";
	char test3[6] = "a-b-c";
	char test4[6] = "-0-9-";
	char expansion1[36];
	char expansion2[36];
	char expansion3[36];
	char expansion4[36];
	
	expand(test1, expansion1);
	printf("%s expands to %s\n", test1, expansion1);

	expand(test2, expansion2);
	printf("%s expands to %s\n", test2, expansion2);
	
	expand(test3, expansion3);
	printf("%s expands to %s\n", test3, expansion3);
	
	expand(test4, expansion4);
	printf("%s expands to %s\n", test4, expansion4);

}
	
void expand(char s1[], char s2[])
{
	int i, l=0;
	int j, k;
	int flag = 0; /* flag indicating whether or not we are in a candidate 'x-y' group*/
	
	for (i=0; s1[i]!='\0'; i++) {
		if(isalnum(s1[i]) && flag == 0)
			j = s1[i];
		else if(isalnum(s1[i]) && flag == 1 && j!=0) { /*expansion pattern found */
			k = s1[i];
			for (; j<=k; j++, l++) { /*perform expansion */
				s2[l] = j; /* for example s2[l] = 97 will set s2[l] to 'a' */
			}
			flag = 0;
			j = 0;
		}
		else if(isalnum(s1[i]) && flag == 1 && j==0) { /* 'a-b-c' pattern found */
			s2[l++] = s1[i];
			flag = 0;
		}
		else if(s1[i] == '-' && i == 0) /* for leading '-' */
			s2[l++] = '-';
		else if(s1[i] == '-' && isalnum(s1[i-1]) )
			flag = 1; /* candidate for expansion, but stil need to check for third element */
	}
	if (flag == 1) /* means there was a trailing '-' */
		s2[l++] = '-';
	s2[l] = '\0';
}