//
//  main.c
//  c2-5
//
//  Created by Xavier Chong on 2016-12-20.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that asks the user to enter a value for x and then
//  displays the value of the following polynomial:
//  3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6

#include <stdio.h>
#include <math.h>

int main(void) {
	
	int x;
	printf("What is the value of x(integer)?: ");
	scanf("%i", &x);
	int result = (3*pow(x, 5))
				+(2*pow(x, 4))
				-(5*pow(x, 3))
				-(pow(x, 2))
				+(7*x)-6;
	printf("= %d\n", result);
}
