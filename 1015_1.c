#include<stdio.h>
#define N 100000
/**
	1才德全尽:德分和才分均不低于h, 按德才总分从高到低排序
	2德胜才: 才分不到h但德分到h, 按总分排序，但排在第一类考生
	3才德兼亡”但尚有“德胜才”：按总分排序，但排在第二类考生之后
	4其他：达到最低线 l 的考生也按总分排序，但排在第三类考生之后 

**/
struct STU{
	int no;
	int de;
	int cai;
	int total;
} stus[N + 1];

void swap(int *p, int i, int j) {
	int tmp = p[i];
	p[i] = p[j];
	p[j] = tmp;
}

int main()
{
	int n, l, h, i, j, k;
	scanf("%d %d %d", &n, &l, &h);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d", &stus[i].no, &stus[i].de, &stus[i].cai);
		stus[i].total = stus[i].de + stus[i].cai;
	}
	
	int typeStu[4][n];	//	四类考生
	int typeCount[4]; // 四类考生数量 
	int c_1 = 0, c_2 = 0, c_3 = 0, c_4 = 0;
	struct STU t;
	for(i = 0; i < n; i++)
	{
		t = stus[i];
		if(t.de >= l && t.cai >= l) {
			if(t.de >= h && t.cai >= h) {
				typeStu[0][c_1++] = i;
				typeCount[0] = c_1; 
			} else if(t.de >= h && t.cai < h) {
				typeStu[1][c_2++] = i;
				typeCount[1] = c_2; 
			} else if(t.cai < h && t.de > t.cai) {
				typeStu[2][c_3++] = i;
				typeCount[2] = c_3;
			} else {
				typeStu[3][c_4++] = i;
				typeCount[3] = c_4;
			}
		}
//		if(t.de >= h && t.cai >= h) {
//			typeStu[0][c_1++] = i;
//		} else if(t.de >= h && t.cai < h) {
//			typeStu[1][c_2++] = i;
//		} else if(t.de < h && t.cai < h && t.de > t.cai) {
//			typeStu[2][c_3++] = i;
//		}  else if(t.de >= l && t.cai >= l) {
//			typeStu[3][c_4++] = i;
//		}
	}
	
	int tc, tmp;
	int *p;
	for(i = 0; i < 4; i++)
	{
		tc = typeCount[i];
		p = typeStu[i];
		for(j = 0; j < tc; j++)
		{
			for(k = 1; k < tc - j; k++) {
				if(stus[p[k-1]].total < stus[p[k]].total)	//冒泡将总分小的交换到后面去 
				{
					swap(p, k, k-1);
				} else if(stus[p[k-1]].total == stus[p[k]].total) {
					if(stus[p[k-1]].de < stus[p[k]].de) {
						swap(p, k, k-1);
					} else if(stus[p[k-1]].de == stus[p[k]].de && stus[p[k-1]].no > stus[p[k]].no) {
						swap(p, k, k-1);
					}
				}
			}
		}
	}
	//printf("%d %d %d %d\n", c_1 , c_2 , c_3 , c_4);
	printf("%d\n", c_1 + c_2 + c_3 + c_4);
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < typeCount[i]; j++)
		{
			printf("%d %d %d\n", stus[typeStu[i][j]].no, stus[typeStu[i][j]].de, stus[typeStu[i][j]].cai);
		}
	}
	
//	for(i = 0; i < n; i++)
//	{
//		printf("%s %d %d\n", stus[i].no, stus[i].de, stus[i].cai);
//	}
	return 0;
}
