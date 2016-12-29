//
//  main.c
//  c3-4
//
//  Created by Xavier Chong on 2016-12-24.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that prompts the user to enter a telephone number
//  in the form (xxx) xxx-xxxx and then displays the number in the form
//  xxx.xxx.xxxx

#include <stdio.h>

int main(void) {
	int area_code, start, end;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &start, &end);
	printf("You entered %d.%d.%d\n", area_code, start, end);
	return 0;
}
