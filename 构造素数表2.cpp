#include <stdio.h>
#include <math.h>
int main() {
	const int SIZE = 20;
	int primes[SIZE];
	for (int i = 0; i < SIZE; i++) {
		primes[i] = 1;
	}
	for (int i = 2; i < SIZE; i++) {
		if (primes[i]) {
			for (int j = 2; i * j < SIZE; j++) {
				primes[i * j] = 0;
			}
		}
	}
	for (int i = 2; i < SIZE; i++) {
		if (primes[i]) {
			printf("%d\t", i);
		}
	}
	return 0;
}

