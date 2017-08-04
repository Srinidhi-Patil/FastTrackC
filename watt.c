#include <stdio.h>

int main()
{
	float lumens,watts,lumensperwatt;
	
	printf("enter the power in watt"); 
	scanf("%f",&watts);
	printf("enter lumens");
	scanf("%f",&lumensperwatt);
	 
	lumens= watts * (lumensperwatt);
	
	printf("result=%f",lumens);
	
	
}