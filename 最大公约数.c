#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int max = 0;
	for (int i = 2; i < a; i++) {
		if (a % i == 0 && i < b && b % i == 0) {
			max = i;
		}
	}
	printf("×î´ó¹«Ô¼ÊýÎª£º%d", max);
	return 0;
}

