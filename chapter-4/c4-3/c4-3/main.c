//
//  main.c
//  c4-3
//
//  Created by Xavier Chong on 2016-12-30.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that asks the user to enter a three-digit number, then
//  prints the number with its digits reversed.

#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &num1, &num2, &num3);
	printf("The reversal is: %d%d%d\n",
		   num3, num2, num1);
	return 0;
	
}

