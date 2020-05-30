#include<stdio.h>
#define N 80

int main()
{
	char words[N + 1];
	int len = 0, i = 0;
	gets(words);
	len = strlen(words);
	
	for(i = len - 1; i > 0; i--)
	{
		if(words[i] == ' ')
		{
			printf("%s", &words[i+1]);
			printf("%c", ' ');
			words[i] = '\0'; 
		} 
	}
	printf("%s", &words[i]);
	return 0;
}
