#include<stdio.h>

struct STU {
	char name[11];
	char no[11];
	int grade;
};

int main()
{
	int n;
	scanf("%d", &n);
	
	struct STU stus[100];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%s %s %d", stus[i].name, stus[i].no, &stus[i].grade);
	}
	
	int maxIndex = 0, minIndex = 0;
	for(int i = 1; i < n; i++)
	{
		if(stus[i].grade > stus[maxIndex].grade)
			maxIndex = i;
		if(stus[i].grade < stus[minIndex].grade)
			minIndex = i;
	} 
	printf("%s %s\n", stus[maxIndex].name, stus[maxIndex].no);
	printf("%s %s", stus[minIndex].name, stus[minIndex].no);
	return 0;
}
