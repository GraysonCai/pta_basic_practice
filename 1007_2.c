#include<stdio.h>
/**
一个数若可以进行因数分解，那么分解时得到的两个数一定是一个小于等于sqrt(n)，一个大于等于sqrt(n)，
据此，上述代码中并不需要遍历到n-1，遍历到sqrt(n)即可，因为若sqrt(n)左侧找不到约数，那么右侧也一定找不到约数
时间复杂度为o(sqrt(n)) 
**/
int sushu(int n)
{
	int i;
	for(i = 2; i < (int) sqrt(n) + 1; i++)
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
