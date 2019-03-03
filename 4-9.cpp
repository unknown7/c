#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void z(int nums, int total);
void d(int nums, int total);
void o(int i, int total);
int main() {
	int h;
	scanf("%d", &h);
	z(h / 2, h);
	for (int i = 0; i < h; i++) {
		printf("* ");
	}
	printf("\n");
	d(h / 2, h);
	return 0;
}
void z(int nums, int total) {
	for (int i = 1; i <= nums; i++) {
		o(i, total);
	}
}
void d(int nums, int total) {
	for (int i = nums; i >= 1; i--) {
		o(i, total);
	}
}
void o(int i, int total) {
	int stars = i * 2 - 1;
	int spaces = total - i * 2 + 1;
	for (int j = 0; j < spaces; j++) {
		printf(" ");
	}
	for (int j = 0; j < stars; j++) {
		printf("* ");
	}
	printf("\n");
}





