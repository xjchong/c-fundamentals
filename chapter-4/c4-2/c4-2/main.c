//
//  main.c
//  c4-2
//
//  Created by Xavier Chong on 2016-12-30.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that asks the user to enter a three-digit number, then
//  prints the number with its digits reversed.

#include <stdio.h>

int main(void) {
	int num;
	printf("Enter a three-digit number: ");
	scanf("%d", &num);
	printf("The reversal is: %d%d%d\n",
		   (num % 10), (num/10 % 10), (num/100));
	return 0;
	
}
