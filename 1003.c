#include<stdio.h>
#define N 10
#define M 101

// ֻ����һ��Pһ��T���м�ĩβ�Ϳ�ͷ����������A�����Ǳ������㿪ͷ��A�ĸ��� * �м��A�ĸ��� = ��β��A�ĸ���������P��T֮�䲻��û��A��

char input[N][M];

int judgeStr(char *p)
{
	int count_p = 0, count_t = 0;
	int i = 1,index_p = 0, index_t = 0;
	while(*p != '\0')
	{
		if(*p != 'P' && *p != 'A' && *p != 'T' && *p != ' ')
			return 0;
		if(*p == 'P') {
			count_p++;
			index_p = i;
		}else if(*p == 'T') {
			count_t++;
			index_t = i;
		}
		p += 1;
		i++;
	}
	if(count_p == 1 && count_t == 1 && index_t - index_p - 1 >= 1 && (i - index_t - 1) == (index_p - 1) * (index_t - index_p - 1))
		return 1;
	return 0;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%s", input[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		printf(judgeStr(input[i]) == 1 ? "YES\n":"NO\n");
	}
	
	return 0;
}
