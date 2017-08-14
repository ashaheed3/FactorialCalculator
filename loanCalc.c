#include <stdio.h>
#include <math.h>

float calcMonthlyPay (float initBal, float intRate, int payPer){
	return initBal * ((intRate*(pow(1+intRate,payPer)))/(pow(1+intRate,payPer)-1));
}



int main() {
	int numOfPay, i = 1;
	float loanAmount, r, x, monthlyPay, paidPrin, paidInter, newBal;

	printf("Enter amount of loan: ");
	scanf("%f", &loanAmount);
	newBal = loanAmount;

	printf("Enter interest rate per year: ");
	scanf("%f", &x);
	r = x/12/100;

	printf("Enter number of payments: ");
	scanf("%d", &numOfPay);

	monthlyPay = calcMonthlyPay(loanAmount, r, numOfPay);
	printf("Monthly payment should be %.2f", monthlyPay);

	printf("\n========================Amortization Schdule========================");
	printf("\n# \t Payment \t Principal \t\t Interest \t\t Balance");

	while (i <= (numOfPay)){
		paidPrin = newBal * r;
		paidInter = monthlyPay - paidPrin;
		newBal = newBal - paidInter;
		printf("\n%d \t %.2f \t %.2f \t\t %.2f \t\t %.2f ", i, monthlyPay, paidInter, paidPrin, newBal);
		i++;
	}

	return 0;
}	
