//
//  main.c
//  c3-1
//
//  Created by Xavier Chong on 2016-12-22.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that accepts a date from the user in the form
//  mm/dd/yyyy and then displays it in the form yyyymmdd.

#include <stdio.h>

int main(void) {
	int month, day, year;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%04d%02d%02d\n", year, month, day);
	return 0;
}
