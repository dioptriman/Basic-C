#include <stdio.h>

float fahrCel (float fahr);


main(){
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper){
		celcius = fahrCel(fahr);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}

	return 0;
}


float fahrCel (float fahr)
{
	float celcius;
	celcius = (5.0/9.0) * (fahr - 32.0);

	return celcius;
}
