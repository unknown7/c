#include <stdio.h>
int main() {
	double sum;
	int count = 0;
	int number;
	printf("�����룺");
	scanf("%d", &number);
	while (number != -1) {
		sum += number;
		count++;
		printf("�����룺");
		scanf("%d", &number);
	}
	printf("��������%d������ƽ����Ϊ��%lf", count, sum / count);
	return 0;
}
