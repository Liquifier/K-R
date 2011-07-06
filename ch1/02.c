/* experiment with some escape sequences*/
#include <stdio.h>

main()
 {
	printf("hello, world\n");
	printf("\a hello, world\n");
	printf("hello, \b world\n");
	printf("hello, \f world\n");
	printf("hello, \r world\n");
	printf("hello, \t world\n");
	printf("hello, world\v\n");
	printf("hello, world\?\n");
	printf("\'hello\', world\n");
	printf("hello\\, world\n");
	printf("hello, \"world\"\n");
	printf("hello, \133 world\n");
	printf("hello, \x45 world\n");
 }
	