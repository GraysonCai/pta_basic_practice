#include<stdio.h>
#include<string.h> 
#define N 60
//MON 表示星期一，TUE 表示星期二，WED 表示星期三，THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日
char days[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
	char strs[4][N+1];
	int i;
	for(i = 0; i < 4; i++)
	{
		scanf("%s", strs[i]);
	}
	
	int lens[4];
	for(i = 0; i < 4; i++)
	{
		lens[i] = strlen(strs[i]);
	}
	
	int len1 = lens[0] < lens[1] ? lens[0] : lens[1];
	int len2 = lens[2] < lens[3] ? lens[2] : lens[3];
	
	// 第一对字符串 
	char first = '\0', second = '\0';
	char t1, t2;
	
	for(i = 0; i < len1; i++)
	{
		t1 = strs[0][i];
		t2 = strs[1][i];
		if(t1 == t2 && (first == '\0' || second == '\0'))
		{
			if(first == '\0' && (t1 >= 'A' && t1 <= 'Z'))
				first = t1;
			else if(first != '\0' && second == '\0' && ((t1 >= '0' && t1 <= '9') || (t1 >= 'A' && t1 <= 'Z')))
				second = t1;
		}
	}
	
	// 第二对字符串 
	int offset = 0;
	for(i = 0; i < len2; i++)
	{
		t1 = strs[2][i];
		t2 = strs[3][i];
		if(t1 == t2 && ((t1 >= 'A' && t1 <= 'Z') || (t1 >= 'a' && t1 <= 'z')))
		{
			offset = i;
			break;
		}
	}
	// 超过60 hour要加1 
	int hour = offset / 60;
	 
	if(second >= '0' && second <= '9')
	{
		hour += second - '0';
	} else if(second >= 'A' && second <= 'Z')
	{
		hour += second - 'A' + 10;
	}
	offset %= 60;
	if(hour < 10) {
		if(offset < 10) {
			printf("%s 0%d:0%d", days[first - 'A'], hour, offset);
		} else {
			printf("%s 0%d:%d", days[first - 'A'], hour, offset);
		}
	} else {
		if(offset < 10) {
			printf("%s %d:0%d", days[first - 'A'], hour, offset);
		} else {
			printf("%s %d:%d", days[first - 'A'], hour, offset);
		}
	}
	return 0;
}
