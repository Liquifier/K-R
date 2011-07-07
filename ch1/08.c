 #include <stdio.h> 
 
   /* count blanks, tabs and newlines */ 
main()
{
	int c, nl, nt, nb;
	
	nl = 0;
	nt = 0;
	nb = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++nb;
		}
		printf("There are %d new line(s), %d tab(s), and %d blank space(s).\n", nl, nt, nb);
}