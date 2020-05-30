#include<stdio.h>

int sushu(int n)
{
	int i;
	if(n == 1 || n == 2)
		return 1;
	for(i = 2; i < n; i++)
		if(n % i == 0)
			return 0;
	return 1; 
}

int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	int i = 1;
	while(i <= n - 2)
	{
		if(sushu(i) && !sushu(i+1) && sushu(i+2)) {
			count++;
		}
		i++;
	}
	printf("%d", count);
	return 0;
}
