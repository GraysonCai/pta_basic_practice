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
	char chs[4];
	scanf("%s", chs);
	printfB(chs[0] - '0');
	printfS(chs[1] - '0');
	printfG(chs[2] - '0');
	return 0;
}
