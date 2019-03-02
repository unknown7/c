#include <stdio.h>
#include <math.h>
int main() {
	int arr1[10] = {2};
	const int SIZE1 = sizeof(arr1) / sizeof(arr1[0]);
	printf("sizeof(arr1)=%d\n", SIZE1);
	for (int i = 0; i < SIZE1; i++) {
		printf("arr1[%d]=%d\n", i, arr1[i]);
	}
	
	/**
		用下面方法初始化数组时，只能从零开始有序初始化，估计是编译器版本不同导致 
	*/
	int arr2[10] = {[0]=3,6,[2]=7};
	const int SIZE2 = sizeof(arr2) / sizeof(arr2[0]);
	printf("sizeof(arr2)=%d\n", SIZE2);
	for (int i = 0; i < SIZE2; i++) {
		printf("arr2[%d]=%d\n", i, arr2[i]);
	}
	
	return 0;
}
