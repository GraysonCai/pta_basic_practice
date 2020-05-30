#include<stdio.h>
// 判断2是不是因数之后，如果2不是因数，在3~sqrt(n)之间就不需要判断其他偶数了，这种情况下算法的时间复杂度为o(sqrt(n)/2)
int sushu(int n)
{
	int i;
	if(n == 1 || n == 2)
		return 1;
	if(n % 2 == 0)
		return 0;
	for(i = 3; i < (int) sqrt(n) + 1; i += 2)
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
			i+=2;
		} else {
			i++;
		}
	}
	printf("%d", count);
	return 0;
}
