//
//  main.c
//  c3-5
//
//  Created by Xavier Chong on 2016-12-24.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that prompts the user to enter the numbers from
//  1 to 16 (in any order) and then displays the numbers in a 4 by 4
//  arrangement, followed by the sums of the rows, columns, and diagonals.
// (Example)
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//
// 16  3  2 13
//  5 10 11  8
//  9  6  7 12
//  4 15 14  1
//
// Row sums: 34 34 34 34
// Column sums: 34 34 34 34
// Diagonal sum: 34 34
//
// (Note: the aboce is a magic square!)

#include <stdio.h>

int main(void) {
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;
	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
		  &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8,
		  &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16);
	printf("\n%2d %2d %2d %2d"
		   "\n%2d %2d %2d %2d"
		   "\n%2d %2d %2d %2d"
		   "\n%2d %2d %2d %2d\n\n",
		   x1, x2, x3, x4, x5, x6, x7, x8,
		   x9, x10, x11, x12, x13, x14, x15, x16);
	printf("Row sums: %2d %2d %2d %2d\n",
		   (x1 + x2 + x3 + x4),
		   (x5 + x6 + x7 + x8),
		   (x9 + x10 + x11 + x12),
		   (x13 + x14 + x15 + x16));
	printf("Column sums: %2d %2d %2d %2d\n",
		   (x1 + x5 + x9 + x13),
		   (x2 + x6 + x10 + x14),
		   (x3 + x7 + x11 + x15),
		   (x4 + x8 + x12 + x16));
	printf("Diagonal sums: %2d %2d\n",
		   (x1 + x6 + x11 + x16),
		   (x4 + x7 + x10 + x13));
	return 0;
		   
		   
}
