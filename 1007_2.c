#include<stdio.h>
/**
һ���������Խ��������ֽ⣬��ô�ֽ�ʱ�õ���������һ����һ��С�ڵ���sqrt(n)��һ�����ڵ���sqrt(n)��
�ݴˣ����������в�����Ҫ������n-1��������sqrt(n)���ɣ���Ϊ��sqrt(n)����Ҳ���Լ������ô�Ҳ�Ҳһ���Ҳ���Լ��
ʱ�临�Ӷ�Ϊo(sqrt(n)) 
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
