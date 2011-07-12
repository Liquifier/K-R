/* Revise the main routine of the longestline program so it will
	correctly print the length of arbitrary long input lines
	and as mush as possible of the text. */
/* so we need to get each line counted and test that, despite
	the maxline limit, that it is indeed the longest line*/
#include <stdio.h> 
#define MAXLINE 5   /* maximum input line length */ 
 
int getline(char line[], int maxline); 
void copy(char to[], char from[]); 
 
/* print the longest input line */ 
main() 
{ 
	int len;            /* current line length */ 
	int max;            /* maximum length seen so far */ 
	char line[MAXLINE];    /* current input line */ 
	char longest[MAXLINE]; /* longest line saved here */ 
	int i, c, nc;
 
	nc = 0;
	max = 0; 
	
	while ((len = getline(line, MAXLINE)) > 0){
		while (c=getchar()!=EOF && c!='\n')
			++nc;
		
		if (nc > max) {
			max = nc; 
			copy(longest, line); 
		} 
		nc = 0;
	}
	if (max > 0)  /* there was a line */ 
		printf("The length of the longest line is %d.\n", (max-1));
		printf("%s\n", longest); 
		
	return 0; 
} 
 
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
 
/* copy:  copy 'from' into 'to'; assume to is big enough */ 
void copy(char to[], char from[]) 
{ 
	int i; 
 
	i = 0; 
	while ((to[i] = from[i]) != '\0') 
		++i; 
}