#include <stdio.h>
/* Fahr to Celsius table using user defined function */

float ftoc(int fahr);

main()
{
	int fahr, lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
	for(fahr = lower; fahr <= upper; fahr = fahr + step)
		printf ("%3d %6.1f\n", fahr, ftoc(fahr));
}

/* Fahr to Celsius function */
float ftoc(int fahr)
{
	float celsius;
	
	celsius = (5.0/9.0)*(fahr-32);
	return celsius;
}
	