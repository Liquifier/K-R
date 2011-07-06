#include <stdio.h>

main()
 {
	float fahr, celsius;
	float lower, upper, step;
	lower = -20;		/* lower limit of temperature scale */
	upper = 150;	/* upper limit */
	step = 11;		/* step size */
	printf("   C \t F\n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahr= ((9.0/5.0) * celsius) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
 }