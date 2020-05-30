#include<stdio.h>

void reverse(int a[], int n, int m)
{
	int t, i;
	for(i = 0; i <= (m - n)/2; i++)
	{
		t = a[n + i];
		a[n + i] = a[m - i];
		a[m - i] = t;
	}
} 

int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int nums[n];
	for(i = 0; i < n; i++) 
	{
		scanf("%d", &nums[i]);
	}
	m %= n;	//	注意m有可能大于n 
	if(m != 0) {
		reverse(nums, 0, n - 1);
		reverse(nums, 0, m - 1);
		reverse(nums, m, n - 1);
	} 
	
	for(i = 0; i < n; i++) {
		printf("%d", nums[i]);
		if(i != n - 1)
			printf(" ");
	}
	return 0;
}
