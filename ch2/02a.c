/* aeosynth's code for getline */
/* Modify the for loop in the getline function without using && or || */
#include <stdio.h> 
#define MAXLINE 1000   /* maximum input line length */ 
 
int getline(char line[], int maxline); 
void copy (char to[], char from[]);
 
/* print the longest input line */ 
main() 
{ 
	int len;            /* current line length */ 
	int max;            /* maximum length seen so far */ 
	char line[MAXLINE];    /* current input line */ 
	char longest[MAXLINE]; /* longest line saved here */ 
 
	max = 0; 
	while ((len = getline(line, MAXLINE)) > 0) 
		if (len > max) { 
			max = len; 
			copy(longest, line); 
        } 
	if (max > 0){  /* there was a line */ 
		printf("%d\n", max);
		printf("%s", longest); 
	}
	return 0; 
} 
 
/* getline:  read a line into s, return length  */ 
int getline(char s[],int lim)
{ 
	int c, i; 
	int state = 1;
	
	for (i=0; state; ++i) {
		if (state = (i<lim-1)) {
			if (state = ((c=getchar()) != '\n')) {
				if (state = (c != EOF)) {
				s[i] = c;
				}
			}
		}	
	}
	--i;
	if (c == '\n') { 
		s[i] = c; 
		++i; 
	} 
	s[i] = '\0'; 
	return i; 
} 
 
/* copy:  copy 'from' into 'to'; assume to is big enough */ 
void copy(char to[], char from[]) 
{ 
	int i; 
 
	i = 0; 
	while ((to[i] = from[i]) != '\0') 
		++i; 
}