 
#include <stdio.h> 
 
/* histogram for frequency of different characters */ 
main() 
{ 
	int c, i, j; 
	int nchar[26]; 
	
	
	for (i = 0; i < 26; ++i) 
		nchar[i] = 0; 
	
	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') 
			++nchar[c-'a'];
		if (c >= 'A' && c <= 'Z')
			++nchar[c-'A'];


	printf("Histogram for frequency of different characters\n"); 
	for (i = 0; i < 26; ++i) {
		printf(" %c: ",'a' + i ); 
		for (j = 0; j < nchar[i]; ++j){
			printf("-");
		}
	printf("\n");
	}
	
   } 
}