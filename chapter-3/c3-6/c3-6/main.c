//
//  main.c
//  c3-6
//
//  Created by Xavier Chong on 2016-12-29.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

#include <stdio.h>

int main(void) {
	int numer1, numer2, denom1, denom2;
	printf("Enter two fractions spearated by a plus sign: ");
	scanf("%d/%d+%d/%d", &numer1, &denom1, &numer2, &denom2);
	printf("The sum is %d/%d\n",
		   ((numer1 * denom2) + (numer2 * denom1)),
		   (denom1 * denom2));
	return 0;
}
