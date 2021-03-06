#include <stdio.h>

/* print Celsius to Fahrenheit table
	for celsius = 0, 20, ..., 300; floating-point version*/
main()
{
	{ printf("Celsius to Fahrenheit Table\n");
}
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;    /* upper limit */
	step = 20;	/* step size */
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius/(5.0/9.0)+32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
		}
	} 
