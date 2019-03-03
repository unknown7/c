#include <stdio.h>
#include <math.h>
int mycmp(const char *a, const char *b);
int main() {
	char a[] = "abc";
	char b[] = "abc";
	int cmp = mycmp(a, b);
	printf("%d", cmp);
	return 0;
}
int mycmp(const char *a, const char *b) {
	while (*a == *b && *a != '\0') {
		a++;
		b++;
	}
	return *a - *b;
}
