#include "prime.h"
#include <stdlib.h>

unsigned is_prime(unsigned long n)
{
	if (n <= 3) {
		return n > 1;
	} else if (n % 2 == 0 || n % 3 == 0) {
		return 0;
	} else {
		for (unsigned short i = 5; i * i <= n; i += 6) {
			if (n % i == 0 || n % (i + 2) == 0) {
				return 0;
			}
		}
		return 1;
	}
}

unsigned long *get_primes(const unsigned max_amount)
{
	unsigned amount = 0;
	unsigned long *primes = (unsigned long*)malloc(max_amount*sizeof(unsigned long));
	unsigned long offset = 2;
	while (amount < max_amount) {
		if (is_prime(offset)) {
			primes[amount] = offset;
			++amount;
		}
		++offset;
	}
	return primes;
}

unsigned count_primes(unsigned *arr, unsigned size)
{
	unsigned count = 0;
	for (unsigned i = 0; i < size; ++i) {
		if(is_prime(arr[i]))
			++count;
	}
	return count;
}
