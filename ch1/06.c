/*  Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>


main()
{
	int c;
	
	c = getchar();
	while (c = getchar() != EOF) 
		printf("%d\n", c);
	
}