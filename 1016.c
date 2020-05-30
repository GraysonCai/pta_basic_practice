#include<stdio.h>
#define N 10

void add(char a[], int i, int da, int pa) {
	if(a[i] == '\0')
		return;
	add(a, i + 1, da, pa);
	if(a[i] - '0' == da) {
		if(i == 0)
			pa += da;
		else
			pa += da * i * 10;
	}
}

int main()
{
	char a[N+1], b[N+1];
	int da, db, pa = 0, pb = 0, i = 0;
	scanf("%s %d %s %d", a, &da, b, &db);
	add(a, 0, da, pa);
	printf("%d", pa);
	return 0;
}
