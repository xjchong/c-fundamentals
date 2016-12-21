//
//  main.c
//  c2-7
//
//  Created by Xavier Chong on 2016-12-21.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that asks the user to enter a CAD amount, and then
//  shows how to pay that amount using the smallest number of $20, $10,
//  $5 bills, and $1 coins.

#include <stdio.h>

int main(void) {
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%i", &amount);
	printf("$20 bills: %d\n", amount/20);
	amount = amount - (amount/20)*20;
	printf("$10 bills: %d\n", amount/10);
	amount = amount - (amount/10)*10;
	printf(" $5 bills: %d\n", amount/5);
	amount = amount - (amount/5)*5;
	printf(" $1 coins: %d\n", amount);
}
