 #include <stdio.h> 
 
   /* count blanks, tabs and newlines */ 
main()
{
	int c, nl;
	
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nl;
		if (c == ' ')
			++nl;
		}
		printf("%d\n", nl);
}