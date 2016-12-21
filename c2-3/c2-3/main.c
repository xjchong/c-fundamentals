//
//  main.c
//  c2-3
//
//  Created by Xavier Chong on 2016-12-20.
//  Copyright © 2016 XJCHONG. All rights reserved.
//

// This program consumes a radius in metres, and produces the volume of
//   of a sphere with that radius.

#include <stdio.h>
#include <math.h>

int main(void) {
	float radius;
	printf("What is the radius(m) of the sphere?: ");
	scanf("%f", &radius);
	printf("The volume of a sphere with radius %.1f metres is %.1fm^3.\n",
		   radius, (4.0f/3.0f)*M_PI*pow(radius, 3));
}
