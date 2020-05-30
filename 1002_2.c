#include<stdio.h>
#define N 101

char* chs[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
char input[N];
int origin = 0;
void printfSum(int sum) {
	if(sum == 0)
		return;
	printfSum(sum / 10);
	printf("%s", chs[sum % 10]);
	if(sum != origin)
		printf("%s", " ");
}

int main() 
{
	scanf("%s", &input);
	int sum = 0;
	for(int i = 0; i < N && input[i] != '\0'; i++) {
		sum += (input[i] - '0');
	}
	origin = sum;
	printfSum(sum);
	return 0;
}
