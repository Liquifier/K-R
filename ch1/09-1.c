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
			++nb;
			d = 1;
		}
		if (d == 0)
		{	
			if (nb == 0)
			{	putchar(c);
			}
		}
			
		
		if (d == 0)	
		{
			if (nb > 0)
			{	
				putchar(' ');
				putchar(c);
				nb = 0;
			}
		}
			
		
	}
}