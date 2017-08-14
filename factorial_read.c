#include <stdio.h>


int factorial(int x){
	if(x==1)
		return 1;
	else
		return x * (factorial(x-1));
}

int main (void)
{

	int num, res;

	printf("Please input a number:");
	scanf("%d", &num);

	res= factorial(num);

	printf("The factorial of %d is %d\n",num,res);
}
