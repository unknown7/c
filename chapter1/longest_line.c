#include <stdio.h>

#define MAX 100

int get_line(char a[]);
void copy(char from[], char to[]);

int main()
{
	char line[MAX], longest_line[MAX];
	int max, cur;

	max = 0;
	while ((cur = get_line(line)) > 1)
		if (cur > max)
			copy(line, longest_line);

	printf("longest:%s\n", longest_line);
	return 0;
}

int get_line(char a[])
{
	int c, i;
	i = 0;
	while ((c = getchar()) != EOF && i + 1 < MAX) {
		if (c != '\n')
			a[i++] = c;
		else {
			a[i++] = '\n';
			break;
		}
	}
	a[i++] = '\0';
	return i;
}

void copy(char from[], char to[])
{
	int i;
	i = 0;
	while (from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
}