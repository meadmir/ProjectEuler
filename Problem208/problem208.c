#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "problem208.h"

#define PI 3.14159265

void move(State *s, Direction *d, const float alpha)
{
	float d_theta = d->h * d->v * alpha;
	
	s->x += d->h * d->v * cos(s->theta + d_theta / 2);
	s->y += d->h * d->v * sin(s->theta + d_theta / 2);
	s->theta += d_theta;
}

char* problem208(void)
{	
	State state = {.x = 0, .y = 0, .theta = PI / 2};
	
	const float alpha = (2 * PI) / 5;
	unsigned __int128 asd = 2;
	move(&state, &((Direction) {1, 1}), alpha);
	move(&state, &((Direction) {-1, -1}), alpha);
	move(&state, &((Direction) {1, 1}), alpha);

	return "str";
}
