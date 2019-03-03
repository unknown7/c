#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int contains(int arr[], int length, int number);
int main() {
	// 初始化第一个数组 
	int num1;
	scanf("%d", &num1);
	int nums1[num1];
	int *p1 = nums1;
	int idx = 0;
	while (idx++ < num1) {
		scanf("%d", p1++);
	}
	// 初始化第二个数组
	int num2;
	scanf("%d", &num2);
	int nums2[num2];
	int l;
	for (l = 0; l < num2; l++) {
		scanf("%d", &nums2[l]);
	}
	
	int ret[40];
	int retc = 0;
	int length = sizeof(nums2) / sizeof(nums2[0]);
	int i;
	for (i = 0; i < num1; i++) {
		if (!contains(nums2, length, nums1[i]) && !contains(ret, retc, nums1[i])) {
			ret[retc++] = nums1[i];
		}
	}
	length = sizeof(nums1) / sizeof(nums1[0]);
	int j;
	for (j = 0; j < num2; j++) {
		if (!contains(nums1, length, nums2[j]) && !contains(ret, retc, nums2[j])) {
			ret[retc++] = nums2[j];
		}
	}
	
	int k;
	for (k = 0; k < retc; k++) {
		printf("%d", ret[k]);
		if (k < retc - 1) {
			printf(" ");
		}
	}
	
	return 0;
}
int contains(int arr[], int length, int number) {
	int ret = 0;
	int i;
	for (i = 0; i < length; i++) {
		if (arr[i] == number) {
			ret = 1;
			break;
		}
	}
	return ret;
}
