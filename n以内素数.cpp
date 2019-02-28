#include <stdio.h>
int main() {
	int n = 0;
	printf("«Î ‰»În£∫");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int c = 0;
		for (int j = 1; j <= i; j++) {
			int m = i % j;
			if (m == 0) {
				c++;
			}
		}
		if (c == 2) {
			printf("%d «ÀÿÀÿ\n", i);
		}
	}
	return 0;
}

