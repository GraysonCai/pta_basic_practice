#include<stdio.h>
#define N 100

int nums[N+1];

void handle(int t)
{
	if(t == 1)
		return;
	do {
		if(t % 2 == 0) {
			t /= 2;
		} else {
			t = (3 * t + 1) / 2;
		}
		if(t <= N) {
			nums[t] = 0;
		}
	} while(t != 1);
}

int main()
{
	int k, i, t;
	scanf("%d", &k);
	int temp[k];
	for(i = 0; i < k; i++)
	{
		scanf("%d", &t);
		temp[i] = t;
		nums[t] = 1;
	}
	
	for(i = 0; i < k; i++)
	{
		handle(temp[i]);
	}
	int count = 0;
	for(i = N - 1; i > 0; i--) {
		if(nums[i] == 1)
			count++;
	}
	
	for(i = N - 1; i > 0; i--) {
		if(nums[i] == 1) {
			printf("%d", i);
			count--;
			if(count) printf(" ");
		}
	}
	return 0;
}
