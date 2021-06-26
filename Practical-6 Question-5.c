#include<stdio.h>

int main()
{
	float inr;
	printf("Enter The amount in INR\n");
	scanf("%f", &inr);
	float usd, eur, sol, rup;
	usd=inr/73.98;
	eur=inr/88.00;
	sol=inr/20.58;
	rup=inr/0.0052;
	printf("%f in Converted Currencies is:\n Dollars: %f\n Euro: %f\n Sol: %f\n Rupiah: %f\n ", inr, usd, eur, sol, rup);
	return 0;
}
