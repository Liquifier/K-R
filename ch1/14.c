 
#include <stdio.h> 
 
/* count digits, white space, others */ 
main() 
{ 
	int c, i, nwhite, nother, j; 
	int ndigit[10]; 
	nwhite = nother = 0; 
	
	for (i = 0; i < 10; ++i) 
		ndigit[i] = 0; 
	
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') 
			++ndigit[c-'0']; 
		else if (c == ' ' || c == '\n' || c == '\t') 
			++nwhite; 
		else 
			++nother; 
	}

	printf("Histogram for frequency of different characters\n"); 
	for (i = 0; i < 10; ++i) {
		printf(" %d", i+1); 
		for (j = 0; j < ndigit[i]; ++j){
			printf("-");
		}
	printf("\n");
	}
	printf("White Space"); 
	for (j = 0; j < nwhite; ++j)
		printf("-");
	printf("\nOther");
	for (j = 0; j < nother; ++j)
		printf("-");
   } 