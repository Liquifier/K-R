/* Remove trailing blanks and tabs from each line of input,
	and delete entirely blank lines */
	
#include <stdio.h>
#define MAXBLANK 1000
	
int main()
{
	int c, b, nc;
	char blank[MAXBLANK];
	
	b = nc = 0;
	
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\t'){ /*start counter for blanks and tabs */
			blank[b++] = c; /*store the blanks */
		}
		else if (c != '\n'){ /* if we encounter a character */
			if ( b > 0){
				blank[b] = 0;
				printf("%s", blank); /* print the previous blanks */
				b = 0; /* reset the blank counter */
			}
			putchar(c);
			nc++;
		}
		else {
			if (nc > 0){
				putchar(c);
			}
			nc = 0;
			b = 0;
		}
	}
	return 0;
}

