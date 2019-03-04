#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char name[10];
	int birth;
	char mobile[17];
} Friend;
int main() {
	int n;
	scanf("%d", &n);
	Friend fs[n];
	int i;
	for (i = 0; i < n; i++) {
		Friend f;
		scanf("%s %d %s", f.name, &f.birth, f.mobile);
		fs[i] = f;
	}
	int j, k;
	for (j = 0; j < n; j++) {
		for (k = j + 1; k < n; k++) {
			Friend f1 = fs[j];
			Friend f2 = fs[k];
			if (f1.birth > f2.birth) {
				Friend t = f1;
				fs[j] = f2;
				fs[k] = t;
			}
		}
	}
	int l;
	for (l = 0; l < n; l++) {
		printf("%s %d %s\n", fs[l].name, fs[l].birth, fs[l].mobile);
	}
	return 0;
}

