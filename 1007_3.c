#include<stdio.h>
// �ж�2�ǲ�������֮�����2������������3~sqrt(n)֮��Ͳ���Ҫ�ж�����ż���ˣ�����������㷨��ʱ�临�Ӷ�Ϊo(sqrt(n)/2)
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
