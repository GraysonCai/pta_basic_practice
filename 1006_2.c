#include<stdio.h>

void printfB(int num)
{
	while(num--) {
		printf("B");
	}
}
void printfS(int num)
{
	while(num--) {
		printf("S");
	}
}
void printfG(int num)
{
	if(num == 0)
		return;
	printfG(num - 1);
	printf("%d", num);
}

int main()
{
	int n;
	scanf("%d", &n);
	printfB((n / 100) % 10);
	printfS((n / 10) % 10);
	printfG(n % 10);
	return 0;
}
