#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("请输入：");
	scanf("%d", &n);
	int m = 1;
	for (int i = 0; i < n; i++) {
		m *= 10;
	}
	for (int x = m / 10; x < m; x++) {
		int w = 1;
		int cnt = 0;
		int t = x;
		int q = x;
		while (t > 0) {
			t /= 10;
			w *= 10;
			cnt++;
		}
		double sum = 0;
		while (w > 0) {
			int a = q / w;
			sum += pow(a, cnt);
			q %= w;
			w /= 10;
		}
		if (sum == x) {
			printf("%d是水仙花数\n", x);
		}
	}
	return 0;
}

