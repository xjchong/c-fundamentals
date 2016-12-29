//
//  main.c
//  c3-3
//
//  Created by Xavier Chong on 2016-12-24.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that breaks down an ISBN enetered by the user:
// Enter ISBN: ___-_-___-_____-_
// GS1 prefix: ___
// Group identifier: _
// Publisher code: ___
// Item number: _____
// Check digit: _

#include <stdio.h>

int main(void) {
	int gs1, group_id, pub_code, item_num, check;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",
		  &gs1, &group_id, &pub_code, &item_num, &check);
	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", group_id);
	printf("Publisher code: %d\n", pub_code);
	printf("Item number: %d\n", item_num);
	printf("Check digit: %d\n", check);
	return 0;
	
}
