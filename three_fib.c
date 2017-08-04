#include<stdio.h>
#include<assert.h>

int main()
{
	int num1,num2,num3,sum;
	printf("enter the three numbers to chek the fibonacci series:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	sum = num1 + num2;
	assert(sum == num3);
	/*if( sum == num3)
		printf(" fibonacci numbers");
	else
		printf(" not fibonacci number"); */
	return 0;
}