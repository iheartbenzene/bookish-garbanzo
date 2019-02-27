#include <stdio.h>

#define LOWEST 00000000.00
#define HIGHEST 1000000.00

#define LIMIT1 10000.00
#define LIMIT2 20000.00
#define LIMIT3 30000.00
#define LIMIT4 50000.00

#define RATE1 02
#define RATE2 05
#define RATE3 07
#define RATE4 10
#define RATE5 15

#define DEDN_PER_DPNDNT 1000

void getData (double* totalIncome, double* taxPaid, int* numOfDpndnts);

void calcTaxes (double totalIncome, double taxPaid, int numOfDpndnts, double* taxableIncome, double* totalTax, double* 

taxDue);

void printInformation (double totalIncome, double taxPaid, int numOfDpndnts, double totalTax, double paidTax, double 

taxDue);

double bracketTax (double income, double startLimit, double stopLimit, int rate);

int main (void) {
    int numOfDpndnts;
	double taxDue;
	double taxPaid;
	double totalIncome;
	double taxableIncome;
	double totalTax;
	
	getData (&totalIncome, &taxPaid, &numOfDpndnts);
	calcTaxes (totalIncome, taxPaid, numOfDpndnts, &totalIncome, &totalTax, &taxDue);
	printInformation (totalIncome, taxableIncome, numOfDpndnts, totalTax, taxPaid, taxDue);

return 0;
}

void getData (double* totalIncome, double* taxPaid, int* numOfDpdnts) {

	printf("\nEnter your total income for last year:");
	scanf("%lf", totalIncome);
	
	printf("\nEnter the total of payroll deductions:");
	scanf("%lf", taxPaid);

	printf("\nEnter number of dependents:");
	scanf("%d", numOfDpdnts);

	return;
}

void calcTaxes (double totInc, double taxPaid, int numOfDpdnts, double* taxableInc, double* totTax, double* taxDue) {

	*taxableInc = totInc - (numOfDpdnts* DEDN_PER_DPNDNT);
	*totTax = bracketTax(*taxableInc, LOWEST, LIMIT1, RATE1)
	+ bracketTax(*taxableInc, LIMIT1, LIMIT2, RATE2)
	+ bracketTax(*taxableInc, LIMIT2, LIMIT3, RATE3)
	+ bracketTax(*taxableInc, LIMIT3, LIMIT4, RATE4)
	+ bracketTax(*taxableInc, LIMIT4, HIGHEST, RATE5);

	*taxDue = *totTax - taxPaid;
	return;
}

void printInformation (double totalIncome, double income, int numDpdnts, double totalTax, double paidTax, double dueTax) {

	printf("\nTotal income: %10.2f\n", totalIncome);
	printf("Number of dependents: %7d\n", numDpdnts);
	printf("Taxable income: %10.2f\n", income);
	printf("Total tax: %10.2f\n", totalTax);
	printf("Tax already paid: %10.2f\n", paidTax);
	
	if (dueTax >= 0.0) {
	printf("Tax due: %10.2f\n", dueTax);
	} else
	printf("Refund: %10.2f\n", -dueTax);

	return;
}

double bracketTax (double income, double startLimit, double stopLimit, int rate) {

	double tax;
	if (income <= startLimit){
	tax = 0.0;}
	else
		if (income > startLimit && income <= stopLimit) {
		tax = (income - startLimit) * rate / 100.00; }
		else {tax = (stopLimit - startLimit) * rate / 100.00; }

return tax;
}