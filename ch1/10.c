 #include <stdio.h> 
 
   /* Copy input to output, replace each tab by \t, each backspace by \b, and each backslash by \\ */ 
main()
{
	double c, d;
	


	
	for (d = 0; (c = getchar()) != EOF; d = 0) {
		if (c == '\b'){
			putchar('\\');
			putchar('b');
			d = 1;
			}
		if (c == '\t'){
			putchar('\\');
			putchar('t');
			d = 1;
			}
		if (c == '\\'){
			putchar('\\');
			putchar('\\');
			d = 1;
			}
		if (d == 0)
			putchar(c);
		}
}