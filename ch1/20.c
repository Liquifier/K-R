/* Write a program "detab" that replaces tabs in the input with the 
	proper number of blanks to space to the next tab stop. 
	Assume a fixed set of tab stops, say every n column.
	Should n be a variable or a symbolic parameter? */
/* tab = 4 blank spaces */
/* n should be a variable. The program should prompt the user to 
	input a number for n so the program does not have to be
	recompiled for each n. I do not know how to do this yet
	so I have used a symbolic parameter instead.*/

#include <stdio.h>

#define MAXLINE 1000
#define N 4

int n;
char line[MAXLINE];
char longest[MAXLINE];
int offset;

int getline(void);

main()
{
	extern int n;
	extern char line[MAXLINE];
	extern int offset;
	extern int blanks;
	int i, j;

	offset= N;
		
	while (getline() > 0){
		for (i = 0; line[i] != '\0'; ++i){
			if (line[i] != '\t' && line[i] != '\n'){
				putchar(line[i]);
				if (offset == N){
					offset = 0;
				}
				++offset;
			}
			else if (line[i] == '\t'){
				for (j = 0; j < offset; ++j){
					putchar(' ');
				}
				offset = N;
			}
			else if (line[i] = '\n')
				putchar('\n');
		}
	}
	return 0;
}

int getline(void)
{
	int c, i;
	extern char line[];
	
	for (i = 0; i < MAXLINE - 1 
		&& (c=getchar()) != EOF && c != '\n'; ++i) 
			line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}