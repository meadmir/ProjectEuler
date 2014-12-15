#ifndef PROBLEM208
#define PROBLEM208

typedef struct direction {
   short v;
   short h;
} Direction;

typedef struct state {
   float x; 
   float y; 
   float theta;
} State;

char* problem208(void);
// h = 1 means going left, h = -1 means going right
// v = 1 means going forward, v = -1 means going backwards
void move(State *state, Direction *d, const float alpha);

#endif