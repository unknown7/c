#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void minmax(int nums[], int size, int *max, int *min);
int main() {
	const int SIZE = 30;
	int nums[SIZE] = {0};
	for (int i = 0; i < SIZE; i++) {
		nums[i] = rand() % 1000;
		printf("%d\t", nums[i]);
	}
	
	printf("nums=%p\n", nums);
	printf("&nums[0]=%p\n", &nums[0]);
	printf("*nums=%d\n", *nums);
	
	int min, max;
	minmax(nums, sizeof(nums) / sizeof(nums[0]), &min, &max);
	printf("min=%d,max=%d\n", min, max);
	
	int *p = &min;
	printf("*p=%d\n", *p);
	printf("p[0]=%d\n", p[0]);
	
	int *q = nums;
	printf("*q=%d\n", *q);
	printf("&*q=%p\n", &*q);
	printf("nums=%p\n", nums);
	
	
	return 0;
}
void minmax(int nums[], int size, int *min, int *max) {
	*min = *max = nums[0];
	for (int i = 0; i < size; i++) {
		if (*min > nums[i]) {
			*min = nums[i];
		}
		if (*max < nums[i]) {
			*max = nums[i];
		}
	}
}