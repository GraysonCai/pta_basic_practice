#include<stdio.h>

int main()
{
	long t, i;
	scanf("%d", &t);
	long result[t+1];
	long a, b, c;
	for(i = 1; i <= t; i++) {
		scanf("%ld %ld %ld", &a, &b, &c);
		if(a + b > c)
			result[i] = 1;
		else
			result[i] = 0;
	}
	
	for(i = 1; i <= t; i++) {
		printf("Case #%ld: %s\n", i, result[i] == 1?"true":"false");
	}
	
	return 0;
}
