#include <stdio.h>
#include <math.h>
int main() {
	int n = 1;
	printf("ÇëÊäÈën£º");
	scanf("%d", &n);
	if (n > 9) {
		n = 9;
	}
	if (n < 1) {
		n = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d", j, i, j * i);
			if (j != i) {
				printf("\t");
			}
		}
		printf("\n");
	}
	return 0;
}

