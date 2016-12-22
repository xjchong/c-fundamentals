//
//  main.c
//  c3-2
//
//  Created by Xavier Chong on 2016-12-22.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that formats product information entered by the user.
// A session with the program should look like:
//  Enter item number: ___
//  Enter unit price: __.__
//  Enter purhcase date (mm/dd/yyyy): __/__/____
//
// Item			Unit			Purchase
//				Price			Date
// ___			$____.__		__/__/____
//
// (Allow dollar amounts up $9999.99)

#include <stdio.h>

int main(void) {
	int item_number, month, day, year;
	float unit_price;
	
	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("\nItem\t\tUnit\t\tPurchase\n");
	printf("\t\t\tPrice\t\tDate\n");
	printf("%d\t\t\t$%4.2f\t\t%02d/%02d/%04d\n",
		   item_number, unit_price, month, day, year);
	
	return 0;
}
