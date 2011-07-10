 #include <stdio.h> 
 
	#define IN 	1 /* inside a word */
	#define OUT 0 /* outside a word */
 
   /* Print a (horizontal) histogram of the length of words from the input */ 
main() 
{ 
	int c, i, j, nw, state; /* nw will be used to count how many characters are in a word */
       
	int nchar[10]; /* each array will store the length of word, up the length 10, or whatever you chooose */
	state = OUT;
	   
	nw = 0;
	   
	   
    for (i = 0; i < 10; ++i) 
		nchar[i] = 0; 
	   
	while ((c = getchar()) != EOF)	
	/* count the number of words of length i */
	if (state == IN && c == ' ' || c == '\n' || c == '\t'){
		if (nw < 9){
			++nchar[nw-1];
			state = OUT;
			nw = 0;
		}
		
		else if(nw >= 10){
			++nchar[9];
			nw = 0;
			state = OUT;
		}
	}
	/* count the length of each word */
	else if (state == IN)
		++nw;
	if (state == OUT && c != ' ' && c != '/n' && c != '\t'){
		state = IN;
		++nw;
			
	}
		
		
	printf("Histogram for length of input words\n");
	for (i = 0; i < 10; ++i){
		if (i < 9){
			printf("%d: ", i+1); 
			for (j = 0; (j < nchar[i]); ++j){
			printf("-");
			}
		}
			
		if(i == (9)){
			printf("%d+: ", 10);
			for (j = 0; j < nchar[i]; ++j)
			printf("-");
		}
		
		
		printf("\n");
	}
       
}