#include<stdio.h>
#define N 101;

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
  scanf("%d", &input);
  
  int sum = n % 10;	
  do {
    sum += (n/10) % 10;
    n /= 10;
  } while(n != 0);

	origin = sum;
	printfSum(sum);
	return 0;
}
