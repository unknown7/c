#include <stdio.h>
#include <math.h>
struct student {
	int id;
	const char *name;
	int gender;
};

int main() {
	struct student s = {
		1, "wilford", 1
	};
	printf("student %s, id=%d, gender=%s\n", s.name, s.id, s.gender == 1 ? "ÄĞ" : "Å®");
	struct student s2 = s;
	printf("%p\n", &s);
	printf("%p\n", &s2);
	return 0;
}

