#include "helper.h"
#include <stdio.h>
#include <stdlib.h>

unsigned arg_min(unsigned nums[])
{
	unsigned min = nums[0];
	unsigned a_min = 0;
	for (unsigned i = 1; i < sizeof(nums); ++i) {
		if (nums[i] < min) {
			min = nums[i];
			a_min = i;
		}
	}
	return a_min;
}

unsigned abs_diff(unsigned a, unsigned b)
{
	if (a > b)
		return a - b;
	else
		return b - a;
}

short sgn(float x)
{
	return (x > 0) - (x < 0);
}

char* int_to_string(int x)
{
	unsigned length = x < 0;
	int temp = x;
	while (temp > 0) {
		temp /= 10;
		++length;
	}
	char* str = malloc(length * sizeof(char));
	sprintf(str, "%d", x);
	return str;
}
