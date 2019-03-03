#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main() {
	const int NUMS = 4;
	for (int i = NUMS; i > 0; i--) {
		for (int j = i; j < NUMS; j++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
			if (j == i - 1) {
				printf("\n");
			} else {
				printf(" ");
			}
		}
	}
	
	printf("* * * *\n");
	printf(" * * *\n");
	printf("  * *\n");
	printf("   *");
	return 0;

	
}

