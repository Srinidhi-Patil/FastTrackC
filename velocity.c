#include <stdio.h>

int main()
{
	float kmh, msec;
	
	printf("enter the velocity in kmh"); 
	scanf("%f",&kmh);
	 msec= (0.2777778)* kmh;

	printf("velocity in msec is %f", msec);
}	
	