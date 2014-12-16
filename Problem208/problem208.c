#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "problem208.h"

#define PI 3.14159265

void move(State *s, Direction *d, const float alpha)
{
	float d_theta = d->h * d->v * alpha;
	
	s->x += d->v * cos(s->theta + d_theta / 2);
	s->y += d->v * sin(s->theta + d_theta / 2);
	s->theta += d_theta;
}

char* problem208(void)
{	
	State state = {.x = 0, .y = 0, .theta = PI / 2};
	
	const float alpha = PI / 2;
	
	move(&state, &((Direction) {-1, -1}), alpha);
	//move(&state, &((Direction) {1, 1}), alpha);
	unsigned long long path_low = 0;
	unsigned char path_high = 65;
	printf("%c\n", 67);
	return "str";
}
