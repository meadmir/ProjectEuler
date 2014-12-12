#include <stdio.h>
#include <time.h>
#include "../Share/prime.h"
#include "problem58.h"

void problem58()
{
	time_t start = clock();
	unsigned next, current = 9, elements_count = 9, primes_count = 3, k = 4;

	while((float)primes_count / elements_count > 0.1) {
		for (unsigned i = 0; i < 4; ++i) {
			next = current + k;
			++elements_count;
			if (is_prime(next))
				++primes_count;
			current = next;
		}
		k += 2;
	}
	time_t stop = clock() - start;
	printf("%u\n", k + 1);
	printf("%f\n", stop / (float) CLOCKS_PER_SEC);
}
