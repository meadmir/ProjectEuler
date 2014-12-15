#include "Problem58/problem58.h"
#include "Problem102/problem102.h"
#include "Problem208/problem208.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	// choose the problem
	char* (*answer)(void) = problem208;
	
	// get the answer
	time_t start = clock();
	char* answer_string = answer();
	time_t stop = clock();
	
	// print the answer and execution time to std output
	printf("The answer is:  %s\n", answer_string);
	printf("Execution time: %f %s\n", 1000 * (stop - start) / (float) CLOCKS_PER_SEC, "ms");
	//free(answer_string);
	return 0;
}
