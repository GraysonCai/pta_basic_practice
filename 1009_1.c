#include<stdio.h>
#define N 80

void reverse(char a[], int n, int m)
{
	char t, i;
	for(i = 0; i <= (m - n)/2; i++)
	{
		t = a[n + i];
		a[n + i] = a[m - i];
		a[m - i] = t;
	}
} 

int main()
{
	char words[N + 1];
	int len = 0, i = 0;
	gets(words);
	len = strlen(words);
	
	reverse(words, 0, len - 1);
	int start = 0;
	for(i = 0; i < len; i++)
	{
		if(words[i] == ' ')
		{
			reverse(words, start, i - 1);
			start = i + 1;
		} 
	}
	reverse(words, start, len - 1);
	
	printf(words);
	
	return 0;
}
