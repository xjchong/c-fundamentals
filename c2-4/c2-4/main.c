//
//  main.c
//  c2-4
//
//  Created by Xavier Chong on 2016-12-20.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that asks the user to enter a dollars-and-cents
//  amount, then displays the amount with 5% tax added (example):
// -> Enter an amount: ___.__
// -> With tax added: $xxx.xx

#include <stdio.h>

int main(void) {
	
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("With tax added: $%.2f\n", amount*1.05f);
	
}
