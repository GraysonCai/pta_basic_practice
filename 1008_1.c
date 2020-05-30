#include<stdio.h>

int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int nums[n];
	int tmp[m];
	for(i = 0; i < n; i++) 
	{
		scanf("%d", &nums[i]);
	}
	for(i = n - m, j = 0; i < n && j < m; i++,j++)
	{
		tmp[j] = nums[i];
	}
	
	for(i = n - m - 1; i >= 0; i--)
	{
		nums[i+m] = nums[i];
	}
	
	for(i = 0; i < m; i++)
	{
		nums[i] = tmp[i];
	}
	
	for(i = 0; i < n - 1; i++) {
		printf("%d ", nums[i]);
	}
	printf("%d", nums[n - 1]);
	return 0;
}
