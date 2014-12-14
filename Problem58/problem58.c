#include <stdio.h>
#include <time.h>
#include "../Share/prime.h"
#include "../Share/helper.h"
#include "problem58.h"

char* problem58()
{
	unsigned next, current = 9, elements_count = 9, primes_count = 3, k = 4;

	while(primes_count / (float)elements_count > 0.1) {
		for (unsigned i = 0; i < 4; ++i) {
			next = current + k;
			++elements_count;
			if (is_prime(next))
				++primes_count;
			current = next;
		}
		k += 2;
	}
	return int_to_string(k + 1);
}
