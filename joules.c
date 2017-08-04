#include <stdio.h>

int main()
{
	float J,kW;
	int S;
	printf("enter the energy in joules"); 
	scanf("%f",&J);
	printf("enter the sec");
	scanf("%d",&S);
	kW = J / (1000 * S);
	printf("energy converted in kwh=%f",kW);
	
	
}
	
