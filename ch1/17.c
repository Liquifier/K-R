/* Print all input lines longer than 80 characters*/

#include <stdio.h>
#define MINLENGTH 81

int checkmin(char line[]);
int copyline(char line[]); 

main()
{
	int status = 0;		
	char line[MINLENGTH];	/*current input line */
	int i, c;
	
	while (status != -1){
		status = checkmin(line);
		if (status == 1)
			status = copyline(line);
	}
	return 0;
}

/* check whether the line exceeds the minimum length  */ 
int checkmin(char s[])
{ 
	int c, i; 
 
	for (i=0; i < MINLENGTH; ++i){
		c = getchar();
		if (c == '\n') return 0;
        if (c == EOF) return -1;
		s[i] = c; 
	}
	return 1;
} 
 
/*  */ 
int copyline(char line[]) 
{ 
	int i, c;
	int status = 1;
	for (i=0; i < MINLENGTH; ++i)
		putchar(s[i]);
	while (status = 1){
		c = getchar();
		if (c = EOF)
			status = -1;
		else if (c = '\n')
			status = 0;
		else
			putchar(c);
	}
	putchar('\n');
	return status;
}