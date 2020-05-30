#include<stdio.h>
int result[5];

// A1 = 能被 5 整除的数字中所有偶数
int isType1(int t)
{
	if(t % 5 == 0 && t % 2 == 0)
		return 1;
	return 0;
}
// A2 = 将被 5 除后余 1 的数字
int isType2(int t)
{
	if(t % 5 == 1)
		return 1;
	return 0; 
}
// A3 = 被 5 除后余 2 的数字
int isType3(int t)
{
	if(t % 5 == 2)
		return 1;
	return 0; 
}

int isType4(int t)
{
	if(t % 5 == 3)
		return 1;
	return 0; 
}

int isType5(int t)
{
	if(t % 5 == 4)
		return 1;
	return 0; 
}

void calc1(int a[], int n)
{
	if(n == 0) {
		result[0] = -1;
		return;
	}
	int sum = 0, i;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
			sum += a[i];
	}
	result[0] = sum;
}

void calc2(int a[], int n)
{
	if(n == 0) {
		result[1] = -1;
		return;
	}
	int sum = 0, i;
	for(i = 0; i < n; i++)
	{
		if(i % 2 == 0)
			sum += a[i];
		else
			sum -= a[i];
	}
	result[1] = sum;
}

float calc4(int a[], int n)
{
	if(n == 0) {
		return -1;
	}
	int sum = 0, i;
	for(i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return (float)sum/ n;
}

void calc5(int a[], int n)
{
	if(n == 0) {
		result[4] = -1;	
		return;
	}
	int max = a[0], i;
	for(i = 1; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	result[4] = max;
}

int main()
{
	int n, i, t;
	scanf("%d", &n);
	int a[5][n];
	int c_1 = 0, c_2 = 0, c_3 = 0, c_4 = 0, c_5 = 0;
	float result3;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &t);
		if(isType1(t))
			a[0][c_1++] = t;
		if(isType2(t))
			a[1][c_2++] = t;
		if(isType3(t))
			a[2][c_3++] = t;
		if(isType4(t))
			a[3][c_4++] = t;
		if(isType5(t))
			a[4][c_5++] = t;
	}
	
	calc1(a[0], c_1);
	calc2(a[1], c_2);
	result[2] = c_3 > 0 ? c_3 : -1;
	result3 = calc4(a[3], c_4);
	calc5(a[4], c_5);
	
	for(i = 0; i < 3; i++)
	{
		if(result[i] == -1)
			printf("%c ", 'N');
		else
			printf("%d ", result[i]);
	}
	if(result3 < 0)
		printf("%c ", 'N');
	else
		printf("%.1f ", result3);
	
	if(result[4] == -1)
			printf("%c", 'N');
		else
			printf("%d", result[4]);
	return 0;
}
