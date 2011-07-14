/* Write a function that reverse(s) the character string s */
/* Use it to write a program that reverses its input one line at a time */

#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim)
{
	int c, i;
	
	for (i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i){
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int reverse(char s[])
{
	int i, j;
	char ch;
	
	for (j = 0; s[j] != '\0'; ++j){
	}
	--j;
	for(i = 0; i < j; ++i){
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		--j;
	}
	return 0;
}

void skipnewline(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; ++i){
		if (s[i] == '\n')
			s[i] = '\0';
	}
}

int main()
{
	char line[MAXLINE];
	
	while ((getline(line, MAXLINE)) > 0){
		skipnewline(line);
		reverse(line);
		printf("%s\n", line);
	}
	return 0;
}