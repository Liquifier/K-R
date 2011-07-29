/* Write a function htois(s), which converts a string of hexadecimal digits
(including an optional 0x of 0X) into its equivalent integer value. 
The allowable digits are 0 through 9, a through f, and A through F. */

#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000

int getline(char s[], int lim);

/* getline:  read a line into s, return length  */ 
int getline(char s[],int lim)
{ 
	int c, i; 
 
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
		s[i] = c; 
	if (c == '\n') { 
		s[i] = c; 
		++i; 
	} 
	s[i] = '\0'; 
	return i; 
} 
 
int htoi(char s[], int length)
{
	int i,j;
	int n = 0;
	int digit, upper, lower;
	
	if (isxdigit(s[0])) { /*check first char in string to see if hex */
		for (i=0, j=length-1; i < length-1, j=0; ++i, --j) {
			if(isdigit(s[i])) {
				digit = s[i] - '0';
				n = n + digit * 16^j;
			}
			else if(isupper(s[i])) {
				upper = s[i] - 'A' + 10;
				n = n + upper * 16^j;
			}
			else if(islower(s[i])) {
				lower = s[i] - 'a' + 10;
				n = n + lower * 16^j;
			}
		}
		return n;	
	}
	else
		return (int) s;

}
 
int main ()
{
	int len;
	char line[MAXLINE];
	
	while ((len = getline(line, MAXLINE)) > 0) {
		htoi(line, len);
		printf("The integer value of the hexidecimal %lx is %ld.\n", line, htoi);
	}
	return 0;
	
}
			