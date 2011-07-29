/* Write a function htois(s), which converts a string of hexadecimal digits
(including an optional 0x of 0X) into its equivalent integer value. 
The allowable digits are 0 through 9, a through f, and A through F. */

#include <stdio.h>
#include <ctype.h>
 
unsigned int htoi(char s[])
{
	int i = 0;
	unsigned int n = 0;
	int digit, upper, lower;
	
	if (s[i] == '0' && (s[i+1] == 'X' || s[i+1] == 'x'))
		i+=2;
	
	if (isxdigit(s[i])){
		while (s[i] != '\0') {
			if((unsigned char)isdigit(s[i])) {
				n = n * 16 + s[i] - '0';
			}
			else if((unsigned char)isupper(s[i])) {
				n = n * 16 + s[i] - 'A' +10;
			}
			else if((unsigned char)islower(s[i])) {
				n = n * 16 + s[i] - 'a' +10;
			}	
			i++;
		}
	}
	else return 0;
	return n;
}
 
int main ()
{
	char test[] = "0x2AF3";

	printf("The integer value of the hexidecimal %s is %u.\n", test, htoi(test));
	
	return 0;
	
}
			