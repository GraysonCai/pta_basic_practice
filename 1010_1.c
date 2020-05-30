#include<stdio.h>
#define N 100

int main()
{
	int t, i = 0;
	char ch;
	int nums[N];
	// 读入一行以空格分割的数字 
	while(scanf("%d", &t) != EOF)
	{
		nums[i++] = t;
		ch = getchar();
		if(ch == '\n')
			break;
	}
	int j;
	for(j = 0; j < i - 1; j+=2)
	{
		nums[j] = nums[j] * nums[j + 1];
		nums[j + 1]--;
	}
	
	
	for(j = 0; j < i - 3; j++)
	{
		printf("%d ", nums[j]);
	}
	if(nums[i-2] == 0 && nums[i-1] != 0) {
		printf("%d", nums[i-3]);
	} else {
		printf("%d %d %d", nums[i-3], nums[i-2], nums[i-1]);
	}
	
	return 0;
}
