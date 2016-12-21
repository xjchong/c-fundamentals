//
//  main.c
//  c2-2
//
//  Created by Xavier Chong on 2016-12-20.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// Write a program that calculates the volume of a sphere with radius
//   of 10 meters.

#include <stdio.h>
#include <math.h>

int main(void) {
	float radius=10;
	float volume = (4.0f/3.0f)*M_PI*pow(radius, 3);
	printf("The volume of the sphere is %.1fm^3\n", volume);
}
