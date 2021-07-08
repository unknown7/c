#include <stdio.h>

struct point
{
	int x;
	int y;
} pt;

struct rect
{
	struct point pt1;
	struct point pt2;
};

int main(int argc, char const *argv[])
{
	pt.x = 30, pt.y = 2;
	struct point p = {50, 4};
	struct rect r = {pt, p};

	printf("%d,%d\n", pt.x, pt.y);
	printf("%d,%d\n", p.x, p.y);

	printf("%d,%d\n", r.pt1.x, r.pt1.y);

	return 0;
}