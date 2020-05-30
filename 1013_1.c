#include<stdio.h>
#include<math.h>

int sushu(int t)
{
	int i;
	for(i = 2; i < (int)sqrt(t) + 1; i++)
	{
		if(t % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int m, n, c = 0, begin = 2, i;
	scanf("%d %d", &m, &n);
	int ss[n];
	while(c != n)
	{
		if(sushu(begin))
			ss[c++] = begin;
		begin++;
	}
	
	c = 1;
	for(i = m - 1; i < n - 1; i++)
	{
		printf("%d", ss[i]);
		if(c++ % 10 == 0)
			printf("\n");
		else 
			printf(" ");
	}
	printf("%d", ss[n - 1]);
	return 0;
}
