#include <stdio.h>

/* Copy input to output, replacing each string of one or more blanks by a single blank */
main()
{
	double c, nb, d;
	nb = 0;
	
	while ((c = getchar()) != EOF) 
	{
		d = 0;
		if (c == ' ')
		{ 
			++nb; /* if the current character is blank, add one to a counter */
			d = 1; /* set d=1 to end the loop if a blank space is found */
		}
		
		if (d == 0) /* run the below statements if the current char is not blank */
		{ 
			if (nb > 0 ) /* this condition would be for if a non-blank char came after a string of blanks */
			{ 
			putchar(' '); /* copy a blank space to replace the previous string of blanks */
			putchar(c); /* copy the non-blank char */
			nb = 0; /* reset the counter so it can count another string of blanks */
			}
		
			else 
			{
			if (nb == 0) /* if the current char isn't following a string of blanks */
			putchar(c);
			}
		}
	}	
		
		
	
}