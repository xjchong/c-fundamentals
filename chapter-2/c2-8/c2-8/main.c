//
//  main.c
//  c2-8
//
//  Created by Xavier Chong on 2016-12-21.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that calculates the remaining balance on a loan after
//  the first, second, and third monthly payments.
//  Consumes the amount of the loan, the interest rate, and monthly pay.

#include <stdio.h>
#include <math.h>

int main(void) {
	float loan, interest_rate, monthly;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	interest_rate = (interest_rate/100.0f)/12.0f;
	
	printf("Enter monthly payment: ");
	scanf("%f", &monthly);
	
	loan = (loan - monthly) + (loan*interest_rate);
	printf("\nBalance remaining after first payment: %.2f\n", loan);
	loan = (loan - monthly) + (loan*interest_rate);
	printf("Balance remaining after second payment: %.2f\n", loan);
	loan = (loan - monthly) + (loan*interest_rate);
	printf("Balance remaining after third payment: %.2f\n", loan);
	
}
