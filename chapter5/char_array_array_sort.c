#include <stdio.h>

int get_line(char*);
char* alloc(int);
void str_cpy(char* , char* );
int str_cmp(char*, char* );

int main()
{
	char* coll[5];
	char line[100];
	int i, l;
	i = 0;
	while ((l = get_line(line)) > 0)
	{
		char *item = alloc(l);
		str_cpy(line, item);
		coll[i++] = item;
	}
	
	return 0;
}

int get_line(char* p)
{
	int c, l;

	l = 0;
	while ((c = getchar()) != EOF && c != '\n')
	{
		*p++ = c;
		l++;
	}
	*p = '\0';

	return l;
}

#define SIZE 65536
static char buff[SIZE];
static char* buff_pn = buff;
char* alloc(int n)
{
	char* result;
	if (buff_pn + n < buff + SIZE)
	{
		result = buff_pn;
		buff_pn += n;
	}
	else
	{
		result = 0;
	}

	return result;
}

void str_cpy(char* from, char* to)
{
	while ((*to++ = *from++) != '\0')
		;
}

int str_cmp(char* a, char* b)
{
	for (; *a == *b; a++, b++)
		if (*a == '\0')
			return 0;
	return *a - *b;
}


















