//
//  main.c
//  c4-4
//
//  Created by Xavier Chong on 2017-01-01.
//  Copyright © 2017 XJCHONG. All rights reserved.
//

// Write a program that reads an integer entered by the user and displays
//  it in octal (base 8).

#include <stdio.h>
#include <math.h>

int main(void) {
	int number;
	printf("Entere a number between 0 and 32767: ");
	scanf("%d", &number);
	printf("In octal, your number is: %1d%1d%1d%1d%1d\n",
		   ((number /(8*8*8*8)) % 8),
		   ((number /(8*8*8)) % 8),
		   ((number /(8*8)) % 8),
		   ((number / 8) % 8),
		   (number % 8));
	
	return 0;
}
