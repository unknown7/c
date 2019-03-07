#include <stdio.h>
int main() {
	int n = 0;
	printf("请输入阶数：");
	scanf("%d", &n);
	int sum = 1;
	int j = n;
	for (; n > 1; n--) {
		sum *= n;
	}
	printf("%d! = %d",j , sum);
	return 0;
}

