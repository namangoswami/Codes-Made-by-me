#include<stdio.h>
#include<math.h>

int main() {
	
	float p, r, t, n;
	float i;
	printf("Enter Principal amount, Rate of interest, Time taken, Number of times\n");
	scanf("%f%f%f%f", &p, &r, &t, &n);
	i=p*pow((1+(r/100)/n), t*n);
	printf("Compound Interest: %f", i);
}
